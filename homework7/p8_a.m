U=1;
a=1;
x=-1:0.01:1;
y=-2*U*a.*(sin(a.*x)./cos(a.*x).^3);
plot(x,y);
title('$$F(x)=-2U_0\alpha\frac{\sin\alpha x}{\cos^3\alpha x}$$','Interpreter','latex')