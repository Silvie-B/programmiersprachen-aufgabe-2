
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
    Vec2 getMax_();
    Vec2 getMin_();
    float circumference(float const& radius);
    void draw(Window window);
    void draw(Window window, Color color);
};

#endif
