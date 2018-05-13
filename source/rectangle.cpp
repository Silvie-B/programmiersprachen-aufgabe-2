#define _USE_MATH_DEFINES
#include "rectangle.hpp"
#include <cmath>

Rectangle:: Rectangle():
    max_(0.0f, 0.0f),
    min_(0.0f, 0.0f),
    color(){}

Rectangle::Rectangle(Vec2 max_, Vec2 min_):
    max_(max_),
    min_(min_){}

Rectangle::Rectangle(Vec2 max_, Vec2 min_, Color color):
    max_(max_),
    min_(min_),
    color(color){}

Vec2 Rectangle::getMax_() const
{
    return max_;
}

Vec2 Rectangle::getMin_() const
{
    return min_;
}

float Rectangle::circumference()
{
    // Länge eines Vektors ist die Wurzel aus den einzelnen Werten zum Quadrat
    
    float umfang = 2 * (max_.x - min_.x) + 2 * (max_.y - min_.y);
    return umfang;
}

void Rectangle::draw(Window const& window) const
{
    // Die fehlenden zwei Punkte des Rechtecks konstruieren
    
    window.draw_line(min_.x, min_.y, max_.x, min_.y, 1.0, 1.0, 1.0);
    window.draw_line(max_.x, min_.y, max_.x, max_.y, 1.0, 1.0, 1.0);
    window.draw_line(max_.x, max_.y, min_.x, max_.y, 1.0, 1.0, 1.0);
    window.draw_line(min_.x, max_.y, min_.x, min_.y, 1.0, 1.0, 1.0);
    
}

void Rectangle::draw(Window const& window, Color const& color) const
{
    window.draw_line(min_.x, min_.y, max_.x, min_.y, color.r, color.g, color.b);
    window.draw_line(max_.x, min_.y, max_.x, max_.y, color.r, color.g, color.b);
    window.draw_line(max_.x, max_.y, min_.x, max_.y, color.r, color.g, color.b);
    window.draw_line(min_.x, max_.y, min_.x, min_.y, color.r, color.g, color.b);
 
}

bool Rectangle::is_inside(Vec2 const& mouse_pos)
{
    bool inside = false;
    // Wenn mouse_pos < als min_ oder > als max_, dann ist es nicht im Rechteck
    // Daher testen, ob mouse_pos >= min_ und <= max_
   if(mouse_pos.x >= min_.x && mouse_pos.x <= max_.x && mouse_pos.y >= min_.y && mouse_pos.y <= max_.y)
    {
        inside = true;
    }
    return inside;
}
