cla;
% Define the variables
k=[0.4 0.7 1 1.3 1.6];
t=10;
dt=0.1;
m=1;
a=pi/4;
v0=90;
g=9.8;

%Plot the curves
hold on;
for i=1:1:length(k)
    [x,y,vx,vy]=getCurve(t,dt,m,k(i),v0,a,g);
    j=0:dt:t;
    v=sqrt(vx.^2+vy.^2);
    plot(j,v);
end
hold off;

% Set the plot
legend('k=0.4','k=0.1','k=1','k=1.3','k=1.6');
xlabel('t');
ylabel('|v|');
axis([0,10,0,90]);
print(gcf,'-dpng','p5.png');

