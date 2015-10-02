#ifndef MOBILE_H
#define MOBILE_H
#include "Shape.h"

class Mobile : public Shape {
  protected :
    int _speed;
  public :
    virtual void move(int dx, int dy) = 0; 
    Mobile(int x, int y, int r, int g, int b, int height, int length, double direction, int speed);
    Mobile(int x, int y, Color* color, int height, int length,  double direction, int speed);
};


#endif
