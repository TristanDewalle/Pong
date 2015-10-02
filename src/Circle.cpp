#include "Circle.h"
#include <string>



    
    /*Circle::Circle(int x,int y,int rad, Color* c):_x(x), _y(y), _r(rad){
      int r,g,b;
      c->getRGB(r,g,b);
      _c = new Color(r,g,b);
    }*/

    Circle::Circle(int x,int y, Color* c,int rad, double direction, int speed):Mobile(x, y, c, rad, rad, direction,  speed){
    }

    Circle::Circle(int x,int y, int r, int g, int b,int rad, double direction, int speed):Mobile(x, y, r, g, b, rad, rad, direction,  speed){
    }
 
    
    //~Rectangle(){}
      
      
    
    
    void Circle::draw(sf::RenderWindow *win) const {
      int r,g,b;
      _color->getRGB(r, g, b);
      sf::CircleShape shape(_height);
      shape.setFillColor(sf::Color(r, g, b));
      shape.setPosition(_x,_y);
      win->draw(shape);
    }
    
    void Circle::move(int dx, int dy){
      _x = _x+dx;
      _y = _y+dy;
    }
      
 
  
  


