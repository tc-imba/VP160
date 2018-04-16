#ifndef CANONICAL_H_INCLUDED
#define CANONICAL_H_INCLUDED
#include "figures.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
static const int SHAPECOUNT=77;
class Canonical{
public:
    Canonical(Point* spiders,double zoo,double* angle);
    ~Canonical();
    void draw();

private:
    Point center;
    double zoom;
    double theta;
    Shape** sh;
    void setcolor(double &r,double &g,double &b,double & t);

};

#endif // CANONICAL_H_INCLUDED
