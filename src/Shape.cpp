#include "Shape.h"

Shape::Shape(int x, int y, int r, int g, int b, int height, int length, double direction):
    _x(x), _y(y),_height(height), _length(length), _direction(direction){

   _color = new Color(r,g,b);
}

Shape::Shape(int x, int y, Color* color, int height, int length, double direction):
     _x(x), _y(y), _height(height), _length(length), _direction(direction){

    int r,g,b;
     color->getRGB(r,g,b);
     _color = new Color(r,g,b);
}

