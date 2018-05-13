#ifndef rectangle_hpp
#define rectangle_hpp
#include "Vec2.hpp"
#include "color.hpp"
#include "window.hpp"


class Rectangle{
public:
    Vec2 max_;
    Vec2 min_;
    Vec2 getMax_() const;
    Vec2 getMin_() const;
    Color color;
    Rectangle();
    Rectangle(Vec2 max_, Vec2 min_);
    Rectangle(Vec2 max_, Vec2 min_, Color color);
    float circumference();
    void draw(Window const& window) const;
    void draw(Window const& window, Color const& color) const;
    bool is_inside(Vec2 const& mouse_pos);
    

};

#endif
