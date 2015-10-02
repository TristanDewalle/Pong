  #include "Wall.h"
  #include <string>
  #include "Color.h"



      
/*      Wall::Wall(int x,int y,int w,int h,Color* c):_x(x), _y(y), _w(w), _h(h){
	int r,g,b;
	c->getRGB(r,g,b);
	_c = new Color(r,g,b);
      }
  */    
      //~Wall(){}
	
	
      
      
      void Wall::draw(sf::RenderWindow *win) const {
	int r,g,b;
	_color->getRGB(r, g, b);
	sf::RectangleShape shape(sf::Vector2f(_length, _height));
	shape.setFillColor(sf::Color(r, g, b));
    shape.setRotation(_direction);
	shape.setPosition(_x,_y);
	win->draw(shape);
      }
      

