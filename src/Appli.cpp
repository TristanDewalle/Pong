#include "Window.h"
#include "Color.h"
#include "Wall.h"
#include "Circle.h"

int main(void) {

  Window* win= new Window("Circles and Walls", 800,600);

  // créer 3 objets de type Wall et les ajouter à la fenêtre
  Color* c1 = new Color(125,35,45);
  Wall* r1 = new Wall(0,0,c1,100,10,0, 1);
  
  Color* c2 = new Color(81,135,5);
  //Wall* r2 = new Wall(10,10,100,200,c2);
  
  Circle* ci = new Circle(250, 400, c2, 50, 1, 1);
  Triangle* t1 = new Triangle(250, 400, 255, 255, 255, 50, 1, 1);
  
  win->addWall(r1);
  //win->addRect(r2);
  win->addCirc(ci);
  win->addTriangle(t1);
  win->display();

  return 0;
}
