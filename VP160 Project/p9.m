cla;
% Define the variables
b=[0.03 0.04 0.05 0.06 0.07];
dt=0.1;
t=10;
m=1;
a=pi/4;
v0=90;
g=9.8;

% Plot the curves
hold on;
for i=1:1:length(b)
    [x,y]=getCurveB(t,dt,m,b(i),v0,a,g);
    plot(x,y);
    ym=max(y);
    xm=x(y==ym);
    xs=x(y<0);
    x0=xs(1);
    str=sprintf('$$x_{max}=%.3f, y_{max}=%.3f$$',xm,ym);
    text(xm-10,ym+3,str,'Interpreter','latex');
    str=sprintf('$$x_0=%.3f$$',x0);
    text(x0-5-i,2*(-1)^i,str,'Interpreter','latex');
end
hold off;

% Set the plot
legend('b=0.03','b=0.04','b=0.05','b=0.06','b=0.07','Location','NorthWest');
xlabel('x');
ylabel('y');
axis([0 80 -20 40]);
print(gcf,'-dpng','p9.png');
