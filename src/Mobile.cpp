#include "Mobile.h"

Mobile::Mobile(int x, int y, int r, int g, int b, int height, int length, double direction, int speed):Shape(x, y, r, g, b, height, length, direction), _speed(speed){
}

Mobile::Mobile(int x, int y, Color* color, int height, int length,  double direction, int speed):Shape(x, y, color , height, length, direction), _speed(speed){

}
