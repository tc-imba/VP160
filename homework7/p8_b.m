U=0.5;
a=2;
x=-0.6:0.01:0.6;
y=-2*U*a.*(sin(a.*x)./cos(a.*x).^3);
plot(x,y);
title('$$F(x)=-2U_0\alpha\frac{\sin\alpha x}{\cos^3\alpha x}$$','Interpreter','latex');
axis([-1,1,-15,15]);