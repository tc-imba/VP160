cla;
% Define the variables
a=[pi/12 pi/6 pi/4 pi/3 5*pi/12];
dt=0.1;
m=1;
k=1;
v0=90;
g=9.8;

% Plot the curves
hold on;
for i=1:1:length(a)
    [x,y]=getCurve(10,dt,m,k,v0,a(i),g);
    plot(x,y);
    ym=max(y);
    xm=x(y==ym);
    xs=x(y<0);
    x0=xs(1);
    str=sprintf('$$x_{max}=%.3f, y_{max}=%.3f$$',xm,ym);
    text(xm-i*4,ym+3,str,'Interpreter','latex');
    str=sprintf('$$x_0=%.3f$$',x0);
    text(x0-i*2,-10+i*3,str,'Interpreter','latex');
end
hold off;

%Set the plot
legend('pi/12', 'pi/6', 'pi/4', 'pi/3', '5*pi/12');
xlabel('x');
ylabel('y');
axis([0 110 -20 100]);
print(gcf,'-dpng','p2.png');

