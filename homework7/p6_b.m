r=0.0:0.0001:3;
F=((1./r).^12-(1./r).^6)./r.*12;
plot(r,F);
title('$$F(r)=U_0\left[\frac{12}{r}\left(\frac{R_0}{r}\right)^{12}-\frac{12}{r}\left(\frac{R_0}{r}\right)^{6}\right]$$','Interpreter','latex');
axis([0 3 -14.4 60]);
