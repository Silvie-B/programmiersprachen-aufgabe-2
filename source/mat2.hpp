#ifndef mat2_hpp
#define mat2_hpp
#include "Vec2.hpp"
struct Mat2{
    float x1;
    float x2;
    float y1;
    float y2;
    Mat2();
    Mat2(float x1, float x2, float y1, float y2);
    Mat2& operator*=(Mat2 const& m);
    float det(Mat2 m);
};
Mat2 operator*(Mat2 const& m1, Mat2 const& m2);
Vec2 operator*(Mat2 const& m, Vec2 const& v);
Vec2 operator*(Vec2 const& v, Mat2 const& m);
float det(Mat2 m);
Mat2 inverse(Mat2 const& m);
Mat2 transponse(Mat2 const& m);
Mat2 make_rotation_mat2( float phi);
#endif 
