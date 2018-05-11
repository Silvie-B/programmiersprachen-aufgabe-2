#define _USE_MATH_DEFINES
#include "rectangle.hpp"
#include "color.hpp"

#include <cmath>

Rectangle:: Rectangle():
    a(0.0f),
    b(0.0f),
    max_(0.0f, 0.0f),
    min_(0.0f, 0.0f),
    color(){}

Rectangle::Rectangle(float a, float b):
    a(a),
    b(b){}

Rectangle::Rectangle(Vec2 max_, Vec2 min_):
    max_(max_),
    min_(min_){}

Rectangle::Rectangle(float a, float b, Vec2 max_, Vec2 min_, Color color):
    a(a),
    b(b),
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

float Rectangle::circumference(float const& a, float const& b)
{
    float umfang;
    
    if(a >= 0 && b >= 0){
        umfang = 2 * a + 2 * b;
    }
    else{
        umfang = 0.0f;
    }
    return umfang;
}

/*
void Rectangle::draw(Window window)
{
    
}

void Rectangle::draw(Window window, Color color)
{
    
}
*/
