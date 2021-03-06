cla;
% Define the variables
a=[pi/12 pi/6 pi/4 pi/3 5*pi/12];
t=5;
dt=0.1;
m=1;
b=0.05;
v0=90;
g=9.8;

%Plot the curves
hold on;
for i=1:1:length(a)
    [x,y,vx,vy]=getCurveB(t,dt,m,b,v0,a(i),g);
    j=0:dt:t;
    v=sqrt(vx.^2+vy.^2);
    plot(j,v);
end
hold off;

% Set the plot
legend('pi/12', 'pi/6', 'pi/4', 'pi/3', '5*pi/12','Location','NorthWest');
xlabel('t');
ylabel('|v|');
axis([0,t,0,90]);
print(gcf,'-dpng','p8.png');

