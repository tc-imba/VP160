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
dt=0.15;
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

% Plot the Euler curve
[t,x,v]=getCurve(tm,dt,x0,v0,w0);
E=0.5*m*w0^2.*x.^2+0.5*m*v.^2;
figure(1);
hold on;
plot(t,x);
figure(2);
hold on;
plot(t,v);
figure(3);
hold on;
plot(t,E);
figure(4);
hold on;
plot(x,v);

% Plot the Runge–Kutta curve
[t,x,v]=getCurveB(tm,dt,x0,v0,w0);
E=0.5*m*w0^2.*x.^2+0.5*m*v.^2;
figure(1);
plot(t,x);
hold off;
figure(2);
plot(t,v);
hold off;
figure(3);
plot(t,E);
hold off;
figure(4);
plot(x,v);
hold off;

% Set the plot
figure(1);
xlabel('t');
ylabel('x(t)');
axis([0 10 -2 2]);
legend('origin','Euler','2nd Runge-Kutta','Location','NorthWest');
print(gcf,'-dpng','p2_a.png');
figure(2);
xlabel('t');
ylabel('v_x(t)');
axis([0 10 -2 2]);
legend('origin','Euler','2nd Runge-Kutta','Location','NorthWest');
print(gcf,'-dpng','p2_b.png');
figure(3);
xlabel('t');
ylabel('E(t)');
axis([0 10 0 2]);
legend('origin','Euler','2nd Runge-Kutta','Location','NorthWest');
print(gcf,'-dpng','p2_c.png');
figure(4);
xlabel('x(t)');
ylabel('v_x(t)');
axis equal;
axis([-2 2 -2 2]);
legend('origin','Euler','2nd Runge-Kutta','Location','NorthWest');
print(gcf,'-dpng','p2_d.png');