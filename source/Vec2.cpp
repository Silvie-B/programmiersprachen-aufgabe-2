#include "Vec2.hpp"

Vec2::Vec2():
x(0.0),
y(0.0) {}

Vec2::Vec2(float x, float y):
x(x1),
y(y1) {}
//Destruktor nicht unbedingt nötig, keine Aufräumarbeiten zu erledingen da nichts per new erschaffen wird.

Vec2& Vec2::operator+=(Vec2 const& v)
{
    x += v.x;
    y += v.y;
    return *this;
}

Vec2& Vec2::operator-=(Vec2 const& v)
{
    x -= v.x;
    y -= v.y;
    return *this;
}

Vec2& Vec2::operator*=(float s)
{
    x *= s;
    y *= s;
    return *this;
}

Vec2& Vec2::operator/=(float s)
{
    if(s == 0){
        x = 0.0f;
        y = 0.0f;
    }
    else{
        x /= s;
        y /= s;
    }
    return *this;
}

