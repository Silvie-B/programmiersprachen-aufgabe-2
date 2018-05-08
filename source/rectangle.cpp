#include "rectangle.hpp"

Rectangle:: Rectangle():
    max_(0.0, 0.0, 0.0, 0.0),
    min_(0.0, 0.0, 0.0, 0.0),
    color(){}

Rectangle::Rectangle(Vec2 max_, Vec2 min_, Color color):
    max_(max_),
    min_(min_),
    color(color){}

float Rectangle::getMax_()
{
    return max_;
}

float Rectangle::getMin_()
{
    return min_;
}

void Rectangle::draw(Window window)
{
    
}

void Rectangle::draw(Window window, Color color)
{
    
}
