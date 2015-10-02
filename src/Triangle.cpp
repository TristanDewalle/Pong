  #include "Triangle.h"
  #include <string>



      
    Triangle::Triangle(int x,int y, Color* c,int rad, double direction, int speed):Mobile(x, y, c, rad, rad, direction,  speed){ 
    }   

    Triangle::Triangle(int x,int y, int r, int g, int b,int rad, double direction, int speed):Mobile(x, y, r, g, b, rad, rad, direction,  speed){ 
    }   
 
      //~Triangle(){}
	
	
      
      
      void Triangle::draw(sf::RenderWindow *win) const {
	int r,g,b;
	_color->getRGB(r, g, b);
	sf::CircleShape shape(_height, 3);
	shape.setFillColor(sf::Color(r, g, b));
	shape.setPosition(_x,_y);
	win->draw(shape);
      }
      
      void Triangle::move(int dx, int dy){
	_x = _x+dx;
	_y = _y+dy;
      }
	
  
    
    


