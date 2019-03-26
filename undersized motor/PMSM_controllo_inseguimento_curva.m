%% DEFINITION VEHICLE VARIABLE
mass = 1725; %curb weight [kg]
cd = 0.5; %draf
frontarea = 2.4; %front area [m^2]
airdens = 1.225; %air density [kg/m^2]
gr = 7.73; %gear ratio
wheelrad = 0.317; %wheel radius [m]
%% EVALUATION OF THE VEHICLE AERODYNAMIC FORCE
speed = linspace(0, 60, 1000); %speed range [0:0.1:60]

faero = 0.5*cd*frontarea*airdens.*speed.^2; %aerodynamic force [N]
paero = (faero.*speed)/1000; %aerodynamic power [kW]

speedkmh = 3.6.*speed;

close all

figure
plot(speedkmh, faero)
grid on
xlabel('Speed [km/h]')
ylabel('Aerodynamic Force [N]')
title('Load force and power')

hold on 
yyaxis right
plot (speedkmh, paero)
ylabel('Aerodynaminc Power [kW]')
legend('Force', 'Power')
xlim([0 220])

%% DEFINITION OF THE CHARACTERISTIC CURVE OF THE MOTOR

pb = 13500; %base power [W]
nb = 5000; %base speed [rpm]
tb = pb/(nb*pi/30); %base torque [Nm]
tm = 120; %maximum torque[Nm]
nm = 3500; %maximum speed at maximum torque[rpm]
nc = nb*1.01; %maximum speed at base power [rpm]
Pmax = 135000;
Tmax = 120;

motorspeed = linspace(0, 8000, 10000);

%create the torque vector
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


subplot(2,1,2)
plot(motorspeed,motorpwr)
grid
xlabel('Motor Speed [rmp]')
ylabel('Motor Power [W]')
title('Power Curve')

%% CREATION OF THE REFERENCE SPEED (STEP FUNCTION)
time = linspace(1, 50, 10000);
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
