cla;
% Define the variables
tm=10;
t=0:0.01:tm;
m=1;
k=1;
v0=90;
a=pi/4;
g=9.8;
b=k^2/(m*g);

x=0:0.001:80;
y=tan(a).*x-(g.*x.^2)./(2*v0^2*cos(a)^2);
plot(x,y);

hold on;

y=(tan(a)+m*g/(k*v0*cos(a))).*x+g*log(1-k/(m*v0*cos(a)).*x);
i_max=0;
for i=1:length(y)
    if(~isreal(y(i)))
       i_max=i-1;
       break;
    end
end
plot(x(1:i_max),y(1:i_max));

% Plot the first curve
[x,y]=getCurveB(tm,0.001,m,b,v0,a,g);
plot(x,y);

hold off;

% Set the plot
legend('without air drag','with a linear drag','with a quadratic drag','Location','NorthWest');
xlabel('x');
ylabel('y');
axis([0 80 -10 70]);
print(gcf,'-dpng','p11.png');
