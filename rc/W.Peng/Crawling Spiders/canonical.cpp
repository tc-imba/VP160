# include <iostream>
# include "canonical.h"
Canonical::~Canonical(){
    for (int i=0;i<SHAPECOUNT;i++){
        delete sh[i];
    }
    delete[] sh;
}



Canonical::Canonical(Point* spiders,double zoo,double* angle){
	double x,y,zoom=zoo;;
	double r=0,g=0,b=0,t=1;
	setcolor(r,g,b,t);
	srand(std::time(0));
	Point pt[8];
	double leglength=0.05;
	double legwidth=leglength/10.0;
	double bodylength=leglength/1.618;
	double legangle=PI/6.0;
	sh=new Shape*[SHAPECOUNT];
	sh[76]=new Quadrilateral(spiders[0],spiders[1],spiders[2],spiders[3],r,g,b,t);
    for (int j=0;j<4;j++){
		x=spiders[j].x;
		y=spiders[j].y;
		theta=angle[j];


		//leg 1
		pt[0]={-leglength/2.0*cos(legangle)-legwidth,leglength/2.0*sin(legangle)+bodylength/2.0};
		pt[1]={-leglength/2.0*cos(legangle),leglength/2.0*sin(legangle)+bodylength/2.0};
		pt[2]={0,0};
		pt[3]={-legwidth,0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[0+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 2
		pt[0]={-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle*2.0)-legwidth,leglength/2.0*sin(legangle)+leglength/2.0*sin(legangle*2.0)+bodylength/2.0};
		pt[1]={-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle*2.0),leglength/2.0*sin(legangle)+leglength/2.0*sin(legangle*2.0)+bodylength/2.0};
		pt[2]={-leglength/2.0*cos(legangle),leglength/2.0*sin(legangle)+bodylength/2.0};
		pt[3]={-leglength/2.0*cos(legangle)-legwidth,leglength/2.0*sin(legangle)+bodylength/2.0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[1+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 3
		pt[0]={-leglength/2.0*cos(legangle)-legwidth,-(leglength/2.0*sin(legangle)+bodylength/2.0)};
		pt[1]={-leglength/2.0*cos(legangle),-(leglength/2.0*sin(legangle)+bodylength/2.0)};
		pt[2]={0,0};
		pt[3]={-legwidth,0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[2+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 4
		pt[0]={-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle*2.0)-legwidth,-(leglength/2.0*sin(legangle)+leglength/2.0*sin(legangle*2.0)+bodylength/2.0)};
		pt[1]={-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle*2.0),-(leglength/2.0*sin(legangle)+leglength/2.0*sin(legangle*2.0)+bodylength/2.0)};
		pt[2]={-leglength/2.0*cos(legangle),-(leglength/2.0*sin(legangle)+bodylength/2.0)};
		pt[3]={-leglength/2.0*cos(legangle)-legwidth,-(leglength/2.0*sin(legangle)+bodylength/2.0)};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[3+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 5
		pt[0]={-(-leglength/2.0*cos(legangle)-legwidth),leglength/2.0*sin(legangle)+bodylength/2.0};
		pt[1]={-(-leglength/2.0*cos(legangle)),leglength/2.0*sin(legangle)+bodylength/2.0};
		pt[2]={0,0};
		pt[3]={-(-legwidth),0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[4+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 6
		pt[0]={-(-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle*2.0)-legwidth),leglength/2.0*sin(legangle)+leglength/2.0*sin(legangle*2.0)+bodylength/2.0};
		pt[1]={-(-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle*2.0)),leglength/2.0*sin(legangle)+leglength/2.0*sin(legangle*2.0)+bodylength/2.0};
		pt[2]={-(-leglength/2.0*cos(legangle)),leglength/2.0*sin(legangle)+bodylength/2.0};
		pt[3]={-(-leglength/2.0*cos(legangle)-legwidth),leglength/2.0*sin(legangle)+bodylength/2.0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[5+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 7
		pt[0]={-(-leglength/2.0*cos(legangle)-legwidth),-(leglength/2.0*sin(legangle)+bodylength/2.0)};
		pt[1]={-(-leglength/2.0*cos(legangle)),-(leglength/2.0*sin(legangle)+bodylength/2.0)};
		pt[2]={0,0};
		pt[3]={-(-legwidth),0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[6+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 8
		pt[0]={-(-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle*2.0)-legwidth),-(leglength/2.0*sin(legangle)+leglength/2.0*sin(legangle*2.0)+bodylength/2.0)};
		pt[1]={-(-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle*2.0)),-(leglength/2.0*sin(legangle)+leglength/2.0*sin(legangle*2.0)+bodylength/2.0)};
		pt[2]={-(-leglength/2.0*cos(legangle)),-(leglength/2.0*sin(legangle)+bodylength/2.0)};
		pt[3]={-(-leglength/2.0*cos(legangle)-legwidth),-(leglength/2.0*sin(legangle)+bodylength/2.0)};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[7+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//Trunk
		pt[0]={0,0};
		pt[4]={x+pt[0].x*cos(theta)-pt[0].y*sin(theta),y+pt[0].x*sin(theta)+pt[0].y*cos(theta)};
		sh[8+j*19]=new Circle(pt[4],bodylength/2.0,r,g,b,1.0);
		//Head
		pt[0]={0,bodylength/2.0};
		for (int i=4;i<=4;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[9+j*19]=new Circle(pt[4],bodylength/3.5,0,1,0,0.8);
		//Tail
		pt[0]={0,-bodylength/2.0};
		pt[1]={-bodylength/2.0,-bodylength/2.0-bodylength/1.618};
		pt[2]={bodylength/2.0,-bodylength/2.0-bodylength/1.618};
		for (int i=4;i<=6;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[10+j*19]=new Triangle(pt[4],pt[5],pt[6],0,0,1,0.8);
		//leg 9
		pt[0]={-leglength/2.0*cos(legangle)-legwidth,leglength/2.0*sin(legangle)+bodylength*0.167};
		pt[1]={-leglength/2.0*cos(legangle),leglength/2.0*sin(legangle)+bodylength*0.167};
		pt[2]={0,0};
		pt[3]={-legwidth,0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[11+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 10
		pt[0]={-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle)-legwidth,leglength/2.0*sin(legangle)+leglength/2.0*sin(-legangle)+bodylength*0.167};
		pt[1]={-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle),leglength/2.0*sin(legangle)+leglength/2.0*sin(-legangle)+bodylength*0.167};
		pt[2]={-leglength/2.0*cos(legangle),leglength/2.0*sin(legangle)+bodylength*0.167};
		pt[3]={-leglength/2.0*cos(legangle)-legwidth,leglength/2.0*sin(legangle)+bodylength*0.167};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[12+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 11
		pt[0]={-leglength/2.0*cos(legangle)-legwidth,leglength/2.0*sin(legangle)-bodylength*0.167};
		pt[1]={-leglength/2.0*cos(legangle),leglength/2.0*sin(legangle)-bodylength*0.167};
		pt[2]={0,0};
		pt[3]={-legwidth,0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[13+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 12
		pt[0]={-leglength/2.0*cos(legangle)-leglength*cos(legangle*2.0)-legwidth,leglength/2.0*sin(legangle)+leglength*sin(-legangle*2.0)-bodylength*0.167};
		pt[1]={-leglength/2.0*cos(legangle)-leglength*cos(legangle*2.0),leglength/2.0*sin(legangle)+leglength*sin(-legangle*2.0)-bodylength*0.167};
		pt[2]={-leglength/2.0*cos(legangle),leglength/2.0*sin(legangle)-bodylength*0.167};
		pt[3]={-leglength/2.0*cos(legangle)-legwidth,leglength/2.0*sin(legangle)-bodylength*0.167};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[14+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 13
		pt[0]={-(-leglength/2.0*cos(legangle)-legwidth),leglength/2.0*sin(legangle)+bodylength*0.167};
		pt[1]={-(-leglength/2.0*cos(legangle)),leglength/2.0*sin(legangle)+bodylength*0.167};
		pt[2]={0,0};
		pt[3]={legwidth,0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[15+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 14
		pt[0]={-(-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle)-legwidth),leglength/2.0*sin(legangle)+leglength/2.0*sin(-legangle)+bodylength*0.167};
		pt[1]={-(-leglength/2.0*cos(legangle)-leglength/2.0*cos(legangle)),leglength/2.0*sin(legangle)+leglength/2.0*sin(-legangle)+bodylength*0.167};
		pt[2]={-(-leglength/2.0*cos(legangle)),leglength/2.0*sin(legangle)+bodylength*0.167};
		pt[3]={-(-leglength/2.0*cos(legangle)-legwidth),leglength/2.0*sin(legangle)+bodylength*0.167};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[16+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 15
		pt[0]={-(-leglength/2.0*cos(legangle)-legwidth),leglength/2.0*sin(legangle)-bodylength*0.167};
		pt[1]={-(-leglength/2.0*cos(legangle)),leglength/2.0*sin(legangle)-bodylength*0.167};
		pt[2]={0,0};
		pt[3]={legwidth,0};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[17+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
		//leg 16
		pt[0]={-(-leglength/2.0*cos(legangle)-leglength*cos(legangle*2.0)-legwidth),leglength/2.0*sin(legangle)+leglength*sin(-legangle*2.0)-bodylength*0.167};
		pt[1]={-(-leglength/2.0*cos(legangle)-leglength*cos(legangle*2.0)),leglength/2.0*sin(legangle)+leglength*sin(-legangle*2.0)-bodylength*0.167};
		pt[2]={-(-leglength/2.0*cos(legangle)),leglength/2.0*sin(legangle)-bodylength*0.167};
		pt[3]={-(-leglength/2.0*cos(legangle)-legwidth),leglength/2.0*sin(legangle)-bodylength*0.167};
		for (int i=4;i<=7;i++)
		    pt[i]={x+pt[i-4].x*cos(theta)-pt[i-4].y*sin(theta),y+pt[i-4].x*sin(theta)+pt[i-4].y*cos(theta)};
		sh[18+j*19]=new Quadrilateral(pt[4],pt[5],pt[6],pt[7],1,0,0,0.8);
	}
}
void Canonical::draw(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
    for(int i=0;i<SHAPECOUNT;i++)
        sh[i]->transparentdraw();
    glutSwapBuffers();
    glFlush();
}

void Canonical::setcolor(double &r,double &g,double &b,double & t){
    r=(double)rand()/RAND_MAX;
    g=(double)rand()/RAND_MAX;
    b=(double)rand()/RAND_MAX;
    t=(double)rand()/RAND_MAX/2.0+1.0/2.0;

}










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







Rec::Rec(Point pt1,Point pt2,float red, float green, float blue,float trans){
    p1={pt1.x,pt1.y};
    p2={pt2.x,pt1.y};
    p3={pt2.x,pt2.y};
    p4={pt1.x,pt2.y};
    r=red;
    g=green;
    b=blue;
    t=trans;
}








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
