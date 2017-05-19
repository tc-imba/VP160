cla;
% Define the variables
k=[0.4 0.7 1 1.3 1.6];
dt=0.1;
t=10;
m=1;
a=pi/4;
v0=90;
g=9.8;

% Plot the curves
hold on;
for i=1:1:length(k)
    [x,y]=getCurve(t,dt,m,k(i),v0,a,g);
    plot(x,y);
    ym=max(y);
    xm=x(y==ym);
    xs=x(y<0);
    x0=xs(1);
    str=sprintf('$$x_{max}=%.3f, y_{max}=%.3f$$',xm,ym);
    text(xm-i*4,ym+3,str,'Interpreter','latex');
    str=sprintf('$$x_0=%.3f$$',x0);
    text(x0-20+i*2,-10+i*3,str,'Interpreter','latex');
end
hold off;

% Set the plot
legend('k=0.4','k=0.1','k=1','k=1.3','k=1.6','Location','NorthWest');
xlabel('x');
ylabel('y');
axis([0 160 -20 100]);
print(gcf,'-dpng','p4.png');
