figure(1);cla;
figure(2);cla;
figure(3);cla;
figure(4);cla;
% Define the variables
x0=0.5;
v0=1;
w0=1.5;
A=5/6;
phi=-atan(4/3);
m=1;
tm=10;
dt=[0.05 0.1 0.15];
t=0:0.01:tm;

% Plot the origin curve
x=A.*cos(w0.*t+phi);
v=-A*w0.*sin(w0.*t+phi);
E=0.5*m*w0^2.*x.^2+0.5*m*v.^2;
figure(1);
plot(t,x);
figure(2);
plot(t,v);
figure(3);
plot(t,E);
figure(4);
plot(x,v);

% Plot the approx curve
for i=1:length(dt)
    [t,x,v]=getCurve(tm,dt(i),x0,v0,w0);
    E=0.5*m*w0^2.*x.^2+0.5*m*v.^2;
    figure(1);
    hold on;
    plot(t,x);
    hold off;
    figure(2);
    hold on;
    plot(t,v);
    hold off;
    figure(3);
    hold on;
    plot(t,E);
    hold off;
    figure(4);
    hold on;
    plot(x,v);
    hold off;
end

% Set the plot
figure(1);
xlabel('t');
ylabel('x(t)');
axis equal;
axis([0 10 -5 5]);
legend('origin','dt=0.05','dt=0.10','dt=0.15','Location','NorthWest');
print(gcf,'-dpng','p1_a.png');
figure(2);
xlabel('t');
ylabel('v_x(t)');
axis equal;
axis([0 10 -5 5]);
legend('origin','dt=0.05','dt=0.10','dt=0.15','Location','NorthWest');
print(gcf,'-dpng','p1_b.png');
figure(3);
xlabel('t');
ylabel('E(t)');
axis equal;
axis([0 10 0 10]);
legend('origin','dt=0.05','dt=0.10','dt=0.15','Location','NorthWest');
print(gcf,'-dpng','p1_c.png');
figure(4);
xlabel('x(t)');
ylabel('v_x(t)');
axis equal;
axis([-2 2 -3 3]);
legend('origin','dt=0.05','dt=0.10','dt=0.15','Location','NorthWest');
print(gcf,'-dpng','p1_d.png');