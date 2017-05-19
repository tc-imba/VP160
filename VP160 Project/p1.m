cla;
% Define the variables
tm=10;
t=0:0.01:tm;
m=1;
k=1;
v0=90;
a=pi/4;
g=9.8;
dt=[0.1 0.3 0.6];
color=['r';'g';'b'];

% Plot the origin curve
x=m/k*v0*cos(a).*(1-exp(-k/m.*t));
y=m/k*(v0*sin(a)+m*g/k).*(1-exp(-k/m.*t))-m*g/k.*t;
plot(x,y,'black');
ym=max(y);
xm=x(y==ym);

% Plot the approx curve
hold on;
for i=1:length(dt)
    [x,y]=getCurve(tm,dt(i),m,k,v0,a,g);
    plot(x,y,color(i));
    j=find(x-xm>0);
    ymi=y(j(1));
    xmi=x(j(1));
    dyi=abs(ym-ymi);
    str=sprintf('$$\\Delta y=%.3f$$',dyi);
    text(xmi,ymi,str,'Interpreter','latex');
end
hold off;

% Set the plot
legend('origin','dt=0.1','dt=0.3','dt=0.6','Location','NorthWest');
xlabel('x');
ylabel('y');
axis([0 70 -10 60]);
print(gcf,'-dpng','p1.png');
