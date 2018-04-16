[x,y,z]=meshgrid(-1:0.2:1,-1:0.2:1,-1:0.2:1);
u=-2.*x-y.*z;
v=z-x.*z;
w=y-x.*y;
quiver3(x,y,z,u,v,w);
title('$$F(r)=(-2x-yz)\hat{n_x}+(z-xz)\hat{n_y}+(y-xy)\hat{n_z}$$','Interpreter','latex');
axis([-1.2 1.2 -1.2 1.2 -1.2 1.2])