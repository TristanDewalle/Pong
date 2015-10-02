#ifndef CIRCLE
#define CIRCLE

#include "Mobile.h"

class Circle : public Mobile {
  public :
 
    Circle(int, int, int, Color*);
    Circle (int x, int y, int r, int g, int b, int rad, double direction, int speed);
    Circle (int x, int y, Color* color, int rad, double direction,  int speed);

    void draw(sf::RenderWindow *win) const;
    void move(int, int);
    
  private:

};
#endif
