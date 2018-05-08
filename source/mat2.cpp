#include "mat2.hpp"
#include "Vec2.hpp"
#include <cmath>

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
    Mat2 *m2 = new Mat2(x1, x2, y1, y2);
    
    x1 = m2->x1 * m.x1 + m2->x2 * m.y1;
    x2 = m2->x1 * m.x2 + m2->x2 * m.y2;
    y1 = m2->y1 * m.x1 + m2->y2 * m.y1;
    y2 = m2->y1 * m.x2 + m2->y2 * m.y2;
    
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

 Vec2 operator*(Vec2 const& v, Mat2 const& m)
 {
     Vec2 *v2 = new Vec2();
     
     v2->x = v.x * m.x1 + v.y * m.x2;
     v2->y = v.y * m.y1 +v.y * m.y2;
     return *v2;
 }

float det(Mat2 m)
{
    float det = m.x1 * m.y2 - m.y1 * m.x2;
    return det;
}

 Mat2 inverse(Mat2 const& m)
 {
     Mat2 *invM = new Mat2();

    invM->x1 = m.y2;
    invM->x2 = m.x2 * -1;
    invM->y1 = m.y1 * -1;
    invM->y2 = m.x1;
    
    float a = 1/(invM->x1 * invM->y2 - invM->x2 * invM->y1);
     
    invM->x1 *= a;
    invM->x2 *= a;
    invM->y1 *= a;
    invM->y2 *= a;
     
    return *invM;
     }


 
 Mat2 transponse(Mat2 const& m)
 {
     Mat2 *transM = new Mat2();
     
     transM->x2 = m.y2;
     transM->y2 = m.x2;
     return *transM;
 }

Mat2 make_rotation_mat2( float phi)
{
    // Bogenmaß -> Grad
    float alpha = (360.0f / (2.0f * M_PI)) * phi;
    Mat2 *rotatation_matrix = new Mat2();
    rotatation_matrix->x1 = cos(alpha);
    rotatation_matrix->x2 = - sin(alpha);
    rotatation_matrix->y1 = sin(alpha);
    rotatation_matrix->y2 = cos(alpha);
    return *rotatation_matrix;
}
