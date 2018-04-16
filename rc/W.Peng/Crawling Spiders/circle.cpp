#include "figures.h"
Circle::Circle(Point pt1,float radi,float red, float green, float blue,float trans) {
    p1=pt1;
    radius=radi;
    r=red; g=green; b=blue,t=trans;
}
void Circle::draw() {
    glColor3f(r, g, b);
    glBegin(GL_POLYGON);
    for (double theta=0;theta<2*PI;theta+=PI/36){
        glVertex2f(p1.x+radius*cos(theta),p1.y+radius*sin(theta));
    }
    glEnd();
    glBegin(GL_LINE_LOOP);
    for (double theta=0;theta<2*PI;theta+=PI/36){
        glVertex2f(p1.x+radius*cos(theta),p1.y+radius*sin(theta));
    }
    glEnd();
}
void Circle::transparentdraw(){

    glColor4f(r, g, b,t);
    glBegin(GL_POLYGON);
    for (double theta=0;theta<2*PI;theta+=PI/36){
        glVertex2f(p1.x+radius*cos(theta),p1.y+radius*sin(theta));
    }
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    for (double theta=0;theta<2*PI;theta+=PI/36){
        glVertex2f(p1.x+radius*cos(theta),p1.y+radius*sin(theta));
    }
    glEnd();

}
void Circle::zoom(float scale){
	radius*=scale;


}

float Circle::area(){

	return PI*radius*radius;



}
void Circle::moveby(float dx,float dy){
    p1.x+=dx;
    p1.y+=dy;

}
