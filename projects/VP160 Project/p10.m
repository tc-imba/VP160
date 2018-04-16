cla;
% Define the variables
b=[0.03 0.04 0.05 0.06 0.07];
t=20;
dt=0.1;
m=1;
a=pi/4;
v0=90;
g=9.8;

%Plot the curves
hold on;
for i=1:1:length(b)
    [x,y,vx,vy]=getCurve(t,dt,m,b(i),v0,a,g);
    j=0:dt:t;
    v=sqrt(vx.^2+vy.^2);
    plot(j,v);
end
hold off;

% Set the plot
legend('b=0.03','b=0.04','b=0.05','b=0.06','b=0.07','Location','SouthEast');
xlabel('t');
ylabel('|v|');
axis([0,t,0,100]);
print(gcf,'-dpng','p10.png');

