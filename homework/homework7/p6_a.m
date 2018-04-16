r=0.0:0.0001:3;
U=(1./r).^12-2.*(1./r).^6;
plot(r,U);
title('$$U=U_0\left[\left(\frac{R_0}{r}\right)^{12}-\left(\frac{R_0}{r}\right)^6\right]$$','Interpreter','latex');
axis([0 3 -1.2 5]);
