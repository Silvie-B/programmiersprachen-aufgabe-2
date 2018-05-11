
#ifndef rectangle_hpp
#define rectangle_hpp
#include "Vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Rectangle{
public:
    float a;
    float b;
    Vec2 max_;
    Vec2 min_;
    Vec2 getMax_();
    Vec2 getMin_();
    Color color;
    Rectangle();
    Rectangle(float a, float b);
    Rectangle(Vec2 max_, Vec2 min_);
    Rectangle(float a, float b, Vec2 max_, Vec2 min_, Color color);
    float circumference(float a, float b);
    void draw(Window window);
    void draw(Window window, Color color);
    

};

#endif
