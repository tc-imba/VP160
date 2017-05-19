[x,y]=meshgrid(-1:0.2:1,-1:0.2:1);
u=-y.^3;
v=x.^3;
quiver(x,y,u,v);
title('$$F(r)=-y^3\hat{n_x}+x^3\hat{n_y}$$','Interpreter','latex');
axis([-1.2 1.2 -1.2 1.2])