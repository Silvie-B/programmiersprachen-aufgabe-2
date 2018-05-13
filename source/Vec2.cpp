#include "Vec2.hpp"

Vec2::Vec2():
x(0.0f),
y(0.0f) {}

Vec2::Vec2(float x, float y):
x(x),
y(y) {}

Vec2::~Vec2()
{
}

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
    if(s <= 0){
        x = 0.0f;
        y = 0.0f;
    }
    else{
    x *= s;
    y *= s;
    }
    return *this;
}

Vec2& Vec2::operator/=(float s)
{
    if(s <= 0){
        x = 0.0f;
        y = 0.0f;
    }
    else{
    x /= s;
    y /= s;
    }
    return *this;
}

Vec2 operator+(Vec2 const& u, Vec2 const& v)
{
    Vec2 a;
    a.x += u.x + v.x;
    a.y += u.y + v.y;
    return a;
   
}

Vec2 operator-(Vec2 const& u, Vec2 const& v)
{
    Vec2 a;
    a.x -= u.x + v.x;
    a.y -= u.y + v.y;
    return a;
}

Vec2 operator*(Vec2 const& v, float s)
{
    Vec2 a;
    a.x *= s * v.x;
    a.y *= s * v.y;
    return a;
}

Vec2 operator/(Vec2 const& v, float s)
{
    Vec2 a;
    a.x /= s / v.x;
    a.y /= s / v.x;
    return a;
}

Vec2 operator*(float s, Vec2 const& v)
{
    Vec2 a;
    a.x *= s * v.x;
    a.y *= s * v.y;
    return a;
}
