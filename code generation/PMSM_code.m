%% DEFINIZIONE VARIABILI VEICOLO


mass = 190; %massa del veicolo [kg]

cd = 0.5; %draf
frontarea = 0.5; %area frontale [m^2]
airdens = 1.024; %densità dell'aria [kg/m^3]

rt = 3; %rapporto di trasmissione
wheelrad = 0.3; %raggio ruota [m]

%% CALCOLO DELLE FORZE RESISTENTI VEICOLO

speed = linspace(0, 60, 1000); %range di velocità [0:0.1:60]

faero = 0.5*cd*frontarea*airdens.*speed.^2; %forza aerodinamica [N]
paero = (faero.*speed)/1000; %potenza aerodinamica [kW]

speedkmh = 3.6.*speed;

close all

figure
plot(speedkmh, faero)
grid on
xlabel('Speed [km/h]')
ylabel('Aerodynamic Force [N]')
title('Load force and power UBM18')

hold on 
yyaxis right
plot (speedkmh, paero)
ylabel('Aerodynaminc Power [kW]')
legend('Force', 'Power')
xlim([0 220])

%% DEFINIZIONE CURVA CARATTERISTICA MOTORE

pb = 1500; %potenza base [W]
nb = 1400; %velocità base [rpm]
tb = pb/(nb*pi/30); %coppia base [Nm]
tm = 12; %coppia massima[Nm]
nm = 800; %velocità massima alla coppia massima[rpm]
nc = nb*1.01; %velocità massima alla potenza base [rpm]
Pmax = 1500;
Tmax = 12;

motorspeed = linspace(0, 8000, 10000);

%creo il vettore della coppia
motortrq = zeros(1,length(motorspeed));
for i = 1:length(motorspeed)
    if motorspeed(i) <= nm
        motortrq(i) = tm;
    else 
        if motorspeed(i) <= nb
            motortrq(i) = tb+(tm-tb)*((nb-motorspeed(i))/(nb-nm))^1.3;
        else 
            if motorspeed(i) <= nc
                motortrq(i) = tb*nb/motorspeed(i);
                trq = motortrq(i);
            else 
                motortrq(i) = trq*(nc/motorspeed(i))^2;
            end
        end
    end
end

motorpwr = (motortrq.*motorspeed.*pi)/30;

figure 
subplot(2,1,1)
plot(motorspeed,motortrq)
grid
xlabel('Motor Speed [rmp]')
ylabel('Motor Torque [Nm]')
title('Torque Curve')
ylim([0 130])


subplot(2,1,2)
plot(motorspeed,motorpwr)
grid
xlabel('Motor Speed [rmp]')
ylabel('Motor Power [Nm]')
title('Power Curve')

%% CREAZIONE DEL PROFILO DI VELOCITà

time = linspace(1, 50, 10000);
% vehiclespeed = 30*sin(time)+35;
vehiclespeed = zeros(1,length(time));
for i = 1:length(time)
    if time(i) < 1.1
        vehiclespeed(i) = 0;
    else
        vehiclespeed(i) = 15;
    end
end

figure 
plot(time, vehiclespeed)
grid 
xlabel('Time [s]')
ylabel('Speed [m/s]')
title('Speed Profile')
