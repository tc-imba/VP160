function [ t,x,v ] =getCurve( tm,dt,x0,v0,w0 )
    x=[x0];
    v=[v0];
    t=[0];
    for i=1:ceil(tm/dt)
        v(i+1)=v(i)-w0^2*x(i)*dt;
        x(i+1)=x(i)+v(i)*dt;
        t(i+1)=t(i)+dt;
    end
end

