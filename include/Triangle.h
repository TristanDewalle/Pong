#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Mobile.h"

class Triangle : public Mobile {
  private :
    int _side;
  public :
    int getSide(void) const {return _side;}
    void setSide(int side){_side=side;}
    
    void draw(sf::RenderWindow *win) const;
    void move(int dx, int dy);
    
    Triangle(int x,int y, Color* c,int rad, double direction, int speed);
    Triangle(int x,int y, int r, int g, int b,int rad, double direction, int speed);
};

#endif
