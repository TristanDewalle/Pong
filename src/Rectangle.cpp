  #include "Rectangle.h"
  #include <string>
  #include "Color.h"



      
      Rectangle::Rectangle(int x,int y,int w,int h,Color* c):_x(x), _y(y), _w(w), _h(h){
	int r,g,b;
	c->getRGB(r,g,b);
	_c = new Color(r,g,b);
      }
      
      //~Rectangle(){}
	
	
      
      
      void Rectangle::draw(sf::RenderWindow *win) const {
	int r,g,b;
	_c->getRGB(r, g, b);
	sf::RectangleShape shape(sf::Vector2f(_w, _h));
	shape.setFillColor(sf::Color(r, g, b));
	shape.setPosition(_x,_y);
	win->draw(shape);
      }
      
      void Rectangle::move(int dx, int dy){
	_x = _x+dx;
	_y = _y+dy;
      }
	
  
    
    


