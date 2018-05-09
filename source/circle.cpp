#define _USE_MATH_DEFINES
#include "circle.hpp"
#include "color.hpp"
#include <cmath>

Circle::Circle():
radius(0.0),
center(0.0),
color(){}
           
Circle::Circle(float radius, float center, Color color):
radius(radius),
center(center),
color(color){}

float Circle::getRadius()
{
    return radius;
}

float Circle::getCenter()
{
    return center;
}

float Circle::circumference(float const& radius)
{
    return radius * M_PI * 2;
}
/*
void Circle::draw(Window window)
{
    
}

void Circle::draw(Window window, Color color)
{
    
}
*/
