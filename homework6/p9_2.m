[x,y]=meshgrid(-1:0.2:1,-1:0.2:1);
u=-(x.^2+1);
v=-(y.^2-1);
quiver(x,y,u,v);
title('$$F(r)=-(x^2+1)\hat{n_x}-(y^2-1)\hat{n_y}$$','Interpreter','latex');
axis([-1.2 1.2 -1.2 1.2])