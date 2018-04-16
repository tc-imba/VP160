function [ x,y,vx,vy ] = getCurve( t,dt,m,k,v0,a,g )
    x=[0];
    y=[0];
    vx=[v0*cos(a)];
    vy=[v0*sin(a)];
    for i=1:1:ceil(t/dt)
        vx(i+1)=vx(i)-k*vx(i)/m*dt;
        vy(i+1)=vy(i)-(k*vy(i)+m*g)/m*dt;
        x(i+1)=x(i)+vx(i)*dt;
        y(i+1)=y(i)+vy(i)*dt;
    end
end