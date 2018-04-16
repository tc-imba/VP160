#include "figures.h"
Triangle::Triangle(Point pt1, Point pt2, Point pt3,
float red, float green, float blue,float trans) {
    p1=pt1; p2=pt2; p3=pt3;
    r=red; g=green; b=blue,t=trans;
}
void Triangle::draw() {
    glColor3f(r, g, b);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p3.x, p3.y);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p3.x, p3.y);
    glEnd();
}
void Triangle::transparentdraw() {

    glColor4f(r, g, b,t);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p3.x, p3.y);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(p1.x, p1.y);
    glVertex2f(p2.x, p2.y);
    glVertex2f(p3.x, p3.y);
    glEnd();
}
void Triangle::zoom(float scale){
	float xc=(p1.x+p2.x+p3.x)/3;
	float yc=(p1.y+p2.y+p3.y)/3;
	p1.x=(p1.x-xc)*scale+xc;
	p2.x=(p2.x-xc)*scale+xc;
	p3.x=(p3.x-xc)*scale+xc;

	p1.y=(p1.y-yc)*scale+yc;
	p2.y=(p2.y-yc)*scale+yc;
	p3.y=(p3.y-yc)*scale+yc;


}

float Triangle::area(){
	float a=sqrt(  (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y)  );
	float b=sqrt(  (p1.x-p3.x)*(p1.x-p3.x)+(p1.y-p3.y)*(p1.y-p3.y)  );
	float c=sqrt(  (p3.x-p2.x)*(p3.x-p2.x)+(p3.y-p2.y)*(p3.y-p2.y)  );
	float p=(a+b+c)/2;
	float s=0;
	s+=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;



}
void Triangle::moveby(float dx,float dy){
    p1.x+=dx;
    p2.x+=dx;
    p3.x+=dx;

    p1.y+=dy;
    p2.y+=dy;
    p3.y+=dy;

}
