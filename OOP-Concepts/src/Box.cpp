#include "Box.h"

Box::Box(double h, double w, double d){
    height=h;
    width=w;
    depth=d;
}

double Box:: volume(){
    return height*width*depth;
}
