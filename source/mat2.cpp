#include "mat2.hpp"
#include "Vec2.hpp"

Mat2::Mat2():
x1(1.0),
x2(0.0),
y1(0.0),
y2(1.0) {}

Mat2::Mat2(float x1, float x2, float y1, float y2):
x1(x1),
x2(x2),
y1(y1),
y2(y2) {}

Mat2& Mat2::operator*=(Mat2 const& m)
{
    x1 *= m.x1;
    x2 *= m.x2;
    y1 *= m.y1;
    y2 *= m.y2;
    return *this;
}

Mat2 operator*(Mat2 const& m1, Mat2 const& m2)
{
    Mat2 *m3 = new Mat2();
    
    m3->x1 = m1.x1 * m2.x1 + m1.x2 * m2.y1;
    m3->x2 = m1.x1 * m2.x2 + m1.x2 * m2.y2;
    m3->y1 = m1.y1 * m2.x1 + m1.y2 * m2.y1;
    m3->y2 = m1.y1 * m2.x2 + m1.y2 * m2.y2;
    return *m3;
}

Vec2 operator*(Mat2 const& m, Vec2 const& v)
{
    Vec2 *v2 = new Vec2();
    
    v2->x = m.x1 * v.x + m.x2 * v.y;
    v2->y = m.y1 * v.x + m.y2 * v.y;
    return *v2;
    
}
/*
 Vec2 operator*(Vec2 const& v, Mat2 const& m)
 {
 
 }
 
 Mat2 inverse(Mat2 const& m)
 {
 
 }
 
 Mat2 transponse(Mat2 const&)
 {
 
 }*/
