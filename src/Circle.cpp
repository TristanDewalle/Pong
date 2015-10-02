#include "Circle.h"
#include <string>
#include "Color.h"



    
    Circle::Circle(int x,int y,int rad, Color* c):_x(x), _y(y), _r(rad){
      int r,g,b;
      c->getRGB(r,g,b);
      _c = new Color(r,g,b);
    }
    
    //~Rectangle(){}
      
      
    
    
    void Circle::draw(sf::RenderWindow *win) const {
      int r,g,b;
      _c->getRGB(r, g, b);
      sf::CircleShape shape(_r);
      shape.setFillColor(sf::Color(r, g, b));
      shape.setPosition(_x,_y);
      win->draw(shape);
    }
    
    void Circle::move(int dx, int dy){
      _x = _x+dx;
      _y = _y+dy;
    }
      
 
  
  


