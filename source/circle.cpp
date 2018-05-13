#define _USE_MATH_DEFINES
#include "circle.hpp"
#include "color.hpp"
#include "window.hpp"
#include <cmath>

Circle::Circle():
    radius(0.0),
    center(0.0f, 0.0f),
    color(1.0,1.0,1.0){}

Circle::Circle(float radius, Vec2 center):
radius(radius),
center(center){}

Circle::Circle(float radius, Vec2 center, Color color):
    radius(radius),
    center(center),
    color(color){}

float Circle::getRadius()
{
    return radius;
}

Vec2 Circle::getCenter()
{
    return center;
}

float Circle::circumference()
{
    return radius * M_PI * 2;
}

void Circle::draw(Window const& window) const
{
    for(int i = 0; i < 360; i++)
    {
        // Grad zu Bogenmaß
        float grad1 = i * M_PI / 180.0;
        float grad2 = (i+1) * M_PI / 180.0;

        window.draw_line(center.x + (radius*sin(grad1)), center.y + (radius*cos(grad1)), center.x + (radius*sin(grad2)), center.y + (radius*cos(grad2)), 1.0, 1.0, 1.0);
    }
}

void Circle::draw(Window const& window, Color const& color) const
{
 for(int i = 0; i < 360; i++)
 {
 // Grad zu Bogenmaß
 float grad1 = i * M_PI / 180.0;
 float grad2 = (i+1) * M_PI / 180.0;
 
 window.draw_line(center.x + (radius*sin(grad1)), center.y + (radius*cos(grad1)), center.x + (radius*sin(grad2)), center.y + (radius*cos(grad2)), color.r, color.g, color.b);
 }
}
bool Circle::is_inside(Vec2 const& mouse_pos)
{
    bool inside = false;
    // Wenn Mouse_pos weiter weg ist vom Center asl der Radius, ist sie außerhalb
    float abstand = sqrt( pow( (mouse_pos.x - center.x), 2) + pow( (mouse_pos.y - center.y), 2) );
    if(abstand <= radius)
    {
        inside = true;
    }
    return inside;
    
}

