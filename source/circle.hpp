#ifndef circle_hpp
#define circle_hpp
#include "window.hpp"
#include "color.hpp"
#include "Vec2.hpp"

class Circle{
public:
    float radius;
    Vec2 center;
    Color color;
    Circle();
    Circle(float radius, Vec2 center);
    Circle(float radius, Vec2 center, Color color);
    float getRadius();
    Vec2 getCenter();
    float circumference();
    void draw(Window const& window) const;
    void draw(Window const& window, Color const& color) const;
    bool is_inside(Vec2 const& mouse_pos);
};



#endif
