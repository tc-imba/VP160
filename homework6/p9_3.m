[x,y]=meshgrid(-1:0.2:1,-1:0.2:1);
u=-(x.^2+y.^2).*x;
v=-(x.^2+y.^2).*y;
quiver(x,y,u,v);
title('$$F(r)=-r^2\hat{r}$$','Interpreter','latex');
axis([-1.2 1.2 -1.2 1.2])