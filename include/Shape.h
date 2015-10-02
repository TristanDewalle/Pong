#ifndef SHAPE_H
#define SHAPE_H
#include "Color.h"
#include "SFML/Graphics.hpp"

class Shape {
  protected :
    int _x;
    int _y;
    Color* _color;
    int _height;
    int _length;
    double _direction;
    
  public :
    int getX(void) const {return _x;}
    int getY(void) const {return _y;}
    int getH(void) const {return _height;}
    int getL(void) const {return _length;}
    int getD(void) const {return _direction;}
    Color getC(void) const {return *_color;}
    
    void setX(int x){_x=x;}
    void setY(int y){_y=y;}
    void setH(int h){_height=h;}
    void setL(int l){_length=l;}
    void setD(int d){_direction=d;}
    void setC(int r, int g, int b){ _color->setRGB(r,g,b);}

    virtual void draw(sf::RenderWindow *win) const = 0;
    
    Shape(int x, int y, int r, int g, int b, int height, int length, double direction);
    Shape(int x, int y, Color* color, int height, int length, double direction);

};

#endif
