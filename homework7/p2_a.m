[x,y]=meshgrid(-1:0.2:1,-1:0.2:1);
u=-2.*y./(x.^2+y.^2);
v=2.*x./(x.^2+y.^2);
quiver(x,y,u,v,'black');
title('$$F(r)=-\frac{Ay}{x^2+y^2}\hat{n_x}+\frac{Ax}{x^2+y^2}\hat{n_y}$$','Interpreter','latex');
axis([-1.2 1.2 -1.2 1.2]);
axis equal;