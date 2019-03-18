% Compare speed output after tuning controller
load('AutotunedSpeed')
speed_cmd = logsout_autotuned.getElement(1).Values;
speed_response = logsout_autotuned.getElement(2).Values;
time = speed_cmd.Time(75001:325001);
reference = speed_cmd.Data(75001:325001);
original = speed_response.Data(75001:325001);
tuned = speed_response.Data(875001:end);

% Plot a comparison of speed
figure
plot(time,original,'LineWidth',1)
hold on
plot(time,tuned,'LineWidth',1)
plot(time,reference,'LineWidth',1)
title('Speed Output of Autotuned Controllers')
legend('Original Controller','Autotuned Controllers','Reference')
grid on
hold off
