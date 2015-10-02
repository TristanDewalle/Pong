#ifndef WINDOW_H
#define WINDOW_H

#include <vector>
#include "SFML/Graphics.hpp"
#include "Rectangle.h"
#include "Circle.h"

class Window {
  private :
    std::string _name;
    int _width, _height;
    sf::RenderWindow *_win;
    std::vector<Rectangle*> _rects;
    std::vector<Circle*> _circs;

  public :
    Window(std::string n="Window", int w=700, int h=500);
    ~Window(void);
    sf::RenderWindow *getRW(void);
    void display(void);
    void addRect(Rectangle* r);
    void drawAll();
    void moveAll(int, int);
    void addCirc(Circle* c);

};

#endif
