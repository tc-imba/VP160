#include "canonical.h"
#include <iostream>
void TimeStep(int n);
void glDraw();
void SpiderChase(Point* spiders, double* angle,int size);
int main (int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000,1000);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Crawling Spiders");
    glClearColor(1.0, 1.0, 1.0, 0.0); glClear(GL_COLOR_BUFFER_BIT);
    glutDisplayFunc(glDraw);
    glutTimerFunc(10, TimeStep, 0);
    glutMainLoop();
}
void glDraw() {
    static Point spiders[4]={{-1.0,1.0},{-1.0,-1.0},{1.0,-1.0},{1.0,1.0}};
    static double angle[4]={PI*1.5,PI*2.0,PI*0.5,PI*1.0};
	SpiderChase(spiders,angle,4);
	double zoom=0.002;
	Canonical spider(spiders,zoom,angle);
	spider.draw();
	
}
void TimeStep(int n) {
    glutTimerFunc(1, TimeStep, 0);
    glutPostRedisplay();
}
void SpiderChase(Point* spiders,double* angle, int size){
	double step=0.00004,newx,newy;
	double distance=sqrt(pow((spiders[0].x-spiders[1].x),2)+pow((spiders[0].y-spiders[1].y),2));
	if (distance<=step*5.0){
		spiders[0]={-1.0,1.0};spiders[1]={-1.0,-1.0};spiders[2]={1.0,-1.0};spiders[3]={1.0,1.0};
		distance=sqrt(pow((spiders[0].x-spiders[1].x),2)+pow((spiders[0].y-spiders[1].y),2));
	}
	for (int i=0;i<size;i++){
		newx=spiders[i].x+step/distance*(spiders[(i+1)%size].x-spiders[i].x);
		newy=spiders[i].y+step/distance*(spiders[(i+1)%size].y-spiders[i].y);
		spiders[i]={newx,newy};
		angle[i]=atan2(spiders[(i+1)%size].y-spiders[i].y,spiders[(i+1)%size].x-spiders[i].x)-PI*0.5;
	}
}
