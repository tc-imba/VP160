syms t
E=1;
B=1;
t=0:pi/100:6*pi;
x=t-E/2*t.^2;
y=1/B*sin(B*t);
z=1/B*cos(B*t);
plot3(x,y,z)
title('$$\frac{E_0}{B_0}=\frac{1}{2}$$', 'Interpreter','latex', 'fontsize',23, 'color','black');