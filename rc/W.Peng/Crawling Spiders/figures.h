#ifndef FIGURES_H_INCLUDED
#define FIGURES_H_INCLUDED
#ifndef __GLUT_H__
#include<GL/glut.h>
#endif
#include <cmath>
#include <cstdlib>
static const double PI=3.1415926535897932384626;
class Point { public: double x,y; };
class Shape {
public: virtual void draw() = 0; virtual ~Shape() {};virtual void zoom(float scale)=0; virtual void moveby(float dx,float dy)=0; virtual float area()=0;virtual void transparentdraw()=0;
};
class Quadrilateral : public Shape {
public:
    Quadrilateral();
    Quadrilateral(Point pt1, Point pt2,Point pt3,Point pt4,float r=0, float g=0, float b=0,float t=1);
    void draw();
    void transparentdraw();
    void zoom(float scale);
    float area();
    void moveby(float dx,float dy);
protected: Point p1,p2,p3,p4; float r, g, b,t;
};
class Rec:public Quadrilateral{
public:
    Rec(Point pt1,Point pt2,float red=0, float green=0, float blue=0,float trans=1);
};
class Triangle : public Shape {
public:
    Triangle(Point pt1, Point pt2,Point pt3, float red=0, float green=0, float blue=0,float trans=1);
    void draw();
    void transparentdraw();
    void zoom(float scale);
    float area();
    void moveby(float dx,float dy);
private: Point p1,p2,p3; float r, g, b,t;
};
class Circle:public Shape{
public:
    Circle(Point pt1,float radi=1, float red=0, float green=0, float blue=0,float trans=1);
    void draw();
    void transparentdraw();
    void zoom(float scale);
    float area();
    void moveby(float dx,float dy);
private: Point p1; float radius,r, g, b,t;
};


#endif // FIGURES_H_INCLUDED
