cla;
% Define the variables
a=[pi/12 pi/6 pi/4 pi/3 5*pi/12];
dt=0.1;
b=0.05;
v0=90;
g=9.8;

% Plot the curves
hold on;
for i=1:1:length(a)
    [x,y]=getCurveB(10,dt,m,b,v0,a(i),g);
    plot(x,y);
    ym=max(y);
    xm=x(y==ym);
    xs=x(y<0);
    x0=xs(1);
    str=sprintf('$$x_{max}=%.3f, y_{max}=%.3f$$',xm,ym);
    text(xm-10,ym+3,str,'Interpreter','latex');
    str=sprintf('$$x_0=%.3f$$',x0);
    y0=0;
    if (i<=2)
        y0=5*(1.5-i);
    end
    text(x0-i,y0,str,'Interpreter','latex');
end
hold off;

%Set the plot
legend('pi/12', 'pi/6', 'pi/4', 'pi/3', '5*pi/12');
xlabel('x');
ylabel('y');
axis([0 50 -10 50]);
print(gcf,'-dpng','p7.png');

