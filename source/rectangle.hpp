#ifndef rectangle_hpp
#define rectangle_hpp
#include "Vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Rectangle{
public:
    Vec2 max_;
    Vec2 min_;
    Color color;
    
    Rectangle();
    Rectangle(Vec2 max_, Vec2 min_, Color color);
    float getMax_();
    float getMin_();
    void draw(Window window);
    void draw(Window window, Color color);
};

#endif
