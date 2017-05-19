[x,y,z]=meshgrid(-1:0.2:1,-1:0.2:1,-1:0.2:1);
u=-(x.^2+y.^2+z.^2).*x;
v=-(x.^2+y.^2+z.^2).*y;
w=-(x.^2+y.^2+z.^2).*z;
quiver3(x,y,z,u,v,w);
title('$$F(r)=-r^2\hat{r}$$','Interpreter','latex');
axis([-1.2 1.2 -1.2 1.2 -1.2 1.2])