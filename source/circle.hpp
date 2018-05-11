#ifndef circle_hpp
#define circle_hpp
#include "window.hpp"
#include "color.hpp"

class Circle{
public:
    float radius;
    float center;
    Color color;
    Circle();
    Circle(float radius, float center);
    Circle(float radius, float center, Color color);
    float getRadius();
    float getCenter();
    float circumference(float const& radius);
    void draw(Window window);
    void draw(Window window, Color color);
};


#endif
