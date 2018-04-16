cla;
% Define the variables
tm=10;
t=0:0.01:tm;
m=1;
b=0.05;
v0=90;
a=pi/4;
g=9.8;
dt=[0.01 0.05 0.11];
color=['r';'g';'b'];

% Plot the origin curve
[x,y]=getCurveB(tm,0.001,m,b,v0,a,g);
plot(x,y,'black');
ym=max(y);
xm=x(y==ym);

% Plot the approx curve
hold on;
for i=1:length(dt)
    [x,y]=getCurveB(tm,dt(i),m,b,v0,a,g);
    plot(x,y,color(i,:));
    j=find(x-xm>0);
    ymi=y(j(1));
    xmi=x(j(1));
    dyi=abs(ym-ymi);
    str=sprintf('$$\\Delta y=%.3f$$',dyi);
    text(xmi,ymi-1*i+2,str,'Interpreter','latex');
end
hold off;

% Set the plot
legend('origin','dt=0.03','dt=0.07','dt=0.11');
xlabel('x');
ylabel('y');
axis([0 50 -10 35]);
print(gcf,'-dpng','p6.png');