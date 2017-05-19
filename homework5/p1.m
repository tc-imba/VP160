F=3;
m=1;
w0=1;
b=1;
w=0.9*w0:0.001*w0:w0;
A1=F./m./sqrt((w0^2-w.^2).^2+(w.*(b/m)).^2);
plot(w,A1);
hold on;
A2=F/(2*m*w0)./sqrt((w0-w).^2+(b/2/m)^2);
plot(w,A2);
hold off;
axis([0.9*w0 w0 0.5*A1(1) 1.5*A1(101)]);
text(0.927*w0,1.1*A1(50),'$$A(\omega_{dr})=\frac{F_0}{m\sqrt{(\omega_0^2-\omega_{dr}^2)^2+\left(\frac{b\omega_{dr}}{m}\right)^2}}$$','Interpreter','latex');
text(0.927*w0,0.9*A2(50),'$$A(\omega_{dr})\approx\frac{F_0}{2m\omega_0\sqrt{(\omega_0-\omega_{dr})^2+\frac{b^2}{4m^2}}}$$','Interpreter','latex');
text(0.91*w0,1.4*A1(101),['$$F_0=' num2str(F) '\quad m=' num2str(m) '\quad \omega_0=' num2str(w0) '\quad b=' num2str(b) '$$'],'Interpreter','latex');