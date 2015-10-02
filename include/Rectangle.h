#ifndef RECTANGLE
#define RECTANGLE

#include "Color.h"
#include "SFML/Graphics.hpp"

class Rectangle {
  public :
 
    Rectangle(int, int, int, int, Color*);
    void draw(sf::RenderWindow *win) const;
    void move(int, int);
    
  private:
    int _x, _y, _w, _h;
    Color* _c;

};
#endif
