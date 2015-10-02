#include <iostream>
#include "Window.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

Window::Window(string n, int w, int h) : _name(n), _width(w), _height(h), 
                                         _win(new sf::RenderWindow(sf::VideoMode(_width, _height), _name)) 
{}

Window::~Window(void) {
  // detruire les objects graphiques

  delete _win;
}

sf::RenderWindow* Window::getRW(void){
  return _win;
}

void Window::addRect(Rectangle* r){
  _rects.push_back(r);
}

void Window::addCirc(Circle * c){
  _circs.push_back(c);
}


void Window::drawAll(){
  int s = _rects.size();
  for(int i=0; i<s; i++){
    _rects[i]->draw(this->_win);
  }
  s=_circs.size();
  for(int i=0; i<s; i++){
    _circs[i]->draw(this->_win);
  }
  
  }

void Window::moveAll(int dx, int dy){
  int s = _rects.size();
  for(int i=0; i<s; i++){
    _rects[i]->move(dx,dy);
    _rects[i]->draw(this->_win);
  }
  s = _circs.size();
  for(int i=0; i<s; i++){
    _circs[i]->move(dx,dy);
    _circs[i]->draw(this->_win);
  }
}

void Window::display(void)
{  
  while (_win->isOpen())
  {
    _win->clear(sf::Color(100, 100, 100));
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
        // get global mouse position
        std:cout<<"left button pressed. pos : \n"<<endl;
        sf::Vector2i pos = sf::Mouse::getPosition(*_win);
        int posX=pos.x; int posY=pos.y;
        std::cout <<posX << posY <<endl;
        }
    
    drawAll();
    
    _win->display();

    sf::Event event;
    if(_win->waitEvent(event)) 
    {
      switch (event.type) 
      {
        case sf::Event::Closed :
             _win->close();
             break;
        case sf::Event::KeyPressed:
             if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		cout<< "A" <<endl;
	     }
	     if(sf::Keyboard::isKeyPressed(sf::Keyboard::B)) {
		cout<< "B" <<endl;
	     }

             if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		moveAll(-10,0);
	     }
	     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		moveAll(10,0);
	     }
	     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		moveAll(0,-10);
	     }
	     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		moveAll(0,10);
	     }
             break;
        default:
          break;
      }
    }
  }
}


