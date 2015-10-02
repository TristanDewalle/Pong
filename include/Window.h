#ifndef WINDOW_H
#define WINDOW_H

#include <vector>
#include "Wall.h"
#include "Circle.h"
#include "Triangle.h"

class Window {
  private :
    std::string _name;
    int _width, _height;
    sf::RenderWindow *_win;
    std::vector<Wall*> _walls;
    std::vector<Circle*> _circs;
    std::vector<Triangle*> _triangles;

  public :
    Window(std::string n="Window", int w=700, int h=500);
    ~Window(void);
    sf::RenderWindow *getRW(void);
    void display(void);
    void addWall(Wall* r);
    void drawAll();
    void moveAll(int, int);
    void addCirc(Circle* c);
    void addTriangle(Triangle* t);

};

#endif
