#include "figures.h"
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
