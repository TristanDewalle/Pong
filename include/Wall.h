#ifndef WALL
#define WALL

#include "Shape.h"

class Wall : public Shape{
  protected:
    double _coefficient;

  public :
 
    void draw(sf::RenderWindow *win) const;
    Wall(int x, int y, int r, int g, int b, int h, int l, double d, double c) : Shape(x,y,r,g,b,h,l,d), _coefficient(c) {};
    Wall(int x, int y, Color* color, int h, int l, double d, double c) : Shape(x,y,color,h,l,d), _coefficient(c) {};

    
  private:

};
#endif
