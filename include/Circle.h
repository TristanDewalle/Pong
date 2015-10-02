#ifndef CIRCLE
#define CIRCLE

#include "Color.h"
#include "SFML/Graphics.hpp"

class Circle {
  public :
 
    Circle(int, int, int, Color*);
    void draw(sf::RenderWindow *win) const;
    void move(int, int);
    
  private:
    int _x, _y, _r;
    Color* _c;

};
#endif
