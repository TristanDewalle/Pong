#include "Window.h"
#include "Color.h"
#include "Rectangle.h"
#include "Circle.h"

int main(void) {

  Window* win= new Window("Circles and Rectangles", 800,600);

  // créer 3 objets de type Rectangle et les ajouter à la fenêtre
  Color* c1 = new Color(125,35,45);
  Rectangle* r1 = new Rectangle(500,400,10,10,c1);
  
  Color* c2 = new Color(81,135,5);
  Rectangle* r2 = new Rectangle(10,10,100,200,c2);
  
  Circle* ci = new Circle(250, 400, 50, c2);
  
  win->addRect(r1);
  win->addRect(r2);
  win->addCirc(ci);

  win->display();

  return 0;
}
