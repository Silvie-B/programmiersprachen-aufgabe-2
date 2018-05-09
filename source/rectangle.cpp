#define _USE_MATH_DEFINES
#include "rectangle.hpp"
#include "color.hpp"

#include <cmath>

Rectangle:: Rectangle():
    max_(0.0, 0.0),
    min_(0.0, 0.0),
    color(){}

Rectangle::Rectangle(Vec2 max_, Vec2 min_, Color color):
    max_(max_),
    min_(min_),
    color(color){}

Vec2 Rectangle::getMax_()
{
    return max_;
}

Vec2 Rectangle::getMin_()
{
    return min_;
}

float circumference(float const& radius)
{
    return radius * M_PI * 2;
}
/*
void Rectangle::draw(Window window)
{
    
}

void Rectangle::draw(Window window, Color color)
{
    
}
*/
