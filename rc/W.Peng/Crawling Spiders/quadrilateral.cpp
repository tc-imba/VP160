#include "figures.h"
Quadrilateral::Quadrilateral(){

}
Quadrilateral::Quadrilateral(Point pt1, Point pt2,Point pt3,Point pt4,float red, float green, float blue,float trans) {
    p1=pt1; p2=pt2;p3=pt3;p4=pt4;
    r=red; g=green; b=blue;t=trans;
}
void Quadrilateral::draw() {
    glColor3f(r, g, b);
    glBegin(GL_QUADS);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p3.x, p3.y);
    glVertex2f(p4.x, p4.y);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p3.x, p3.y);
    glVertex2f(p4.x, p4.y);
    glEnd();
}
void Quadrilateral::transparentdraw() {
    glColor4f(r, g, b,t);
    glBegin(GL_QUADS);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p3.x, p3.y);
    glVertex2f(p4.x, p4.y);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p3.x, p3.y);
    glVertex2f(p4.x, p4.y);
    glEnd();
}
void Quadrilateral::zoom(float scale){
	float xc=(p1.x+p2.x+p3.x+p4.x)/4;
	float yc=(p1.y+p2.y+p3.y+p4.y)/4;
	p1.x=(p1.x-xc)*scale+xc;
	p2.x=(p2.x-xc)*scale+xc;
	p3.x=(p3.x-xc)*scale+xc;
	p4.x=(p4.x-xc)*scale+xc;
	p1.y=(p1.y-yc)*scale+yc;
	p2.y=(p2.y-yc)*scale+yc;
	p3.y=(p3.y-yc)*scale+yc;
	p4.y=(p4.y-yc)*scale+yc;

}

float Quadrilateral::area(){
	float a=sqrt(  (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)  );
	float b=sqrt(  (p1.x-p3.x)*(p1.x-p3.x)+(p1.y-p3.y)*(p1.y-p3.y)  );
	float c=sqrt(  (p3.x-p2.x)*(p3.x-p2.x)+(p3.y-p2.y)*(p3.y-p2.y)  );
	float p=(a+b+c)/2;
	float s=0;
	s+=sqrt(p*(p-a)*(p-b)*(p-c));
	a=sqrt(  (p1.x-p4.x)*(p1.x-p4.x)+(p1.y-p4.y)*(p1.y-p4.y)  );
	b=sqrt(  (p1.x-p3.x)*(p1.x-p3.x)+(p1.y-p3.y)*(p1.y-p3.y)  );
	c=sqrt(  (p3.x-p4.x)*(p3.x-p4.x)+(p3.y-p4.y)*(p3.y-p4.y)  );
	p=(a+b+c)/2;
	s+=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;



}
void Quadrilateral::moveby(float dx,float dy){
    p1.x+=dx;
    p2.x+=dx;
    p3.x+=dx;
    p4.x+=dx;
    p1.y+=dy;
    p2.y+=dy;
    p3.y+=dy;
    p4.y+=dy;
}
