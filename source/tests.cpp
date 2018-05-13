#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "Vec2.hpp"
#include "mat2.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

TEST_CASE("testing_constr" , "[Constr]")
{
    //Tests für Standard und User
    Vec2 v1;
    Vec2 v2;
    Vec2 v3(3.0f, 2.0f);
    Vec2 v4(-4.5f, -6.66f);
    
    REQUIRE(v1.x == 0.0f);
    REQUIRE(v2.y == 0.0f);
    
    REQUIRE(v2.x == 0.0f);
    REQUIRE(v2.y == 0.0f);
    
    REQUIRE(v3.x == 3.0f);
    REQUIRE(v3.y == 2.0f);
    
    REQUIRE(v4.x == -4.5f);
    REQUIRE(v4.y == -6.66f);
    
}

// Aufgabe 2.3
TEST_CASE("testing_operator+=" , "[operator+=]")
{
    Vec2 v1;
    Vec2 v2(2.0f, 3.0f);
    Vec2 v3(4.0f, 6.0f);
    
    v1 += v2;
    REQUIRE(v1.x == 2.0f);
    REQUIRE(v1.y == 3.0f);

    v1 += v3;
    REQUIRE(v1.x == 6.0f);
    REQUIRE(v1.y == 9.0f);
    
    v2 += v3;
    REQUIRE(v2.x == 6.0f);
    REQUIRE(v2.y == 9.0f);
}

TEST_CASE("testing_operator-=" , "[operator -=]")
{
    Vec2 v1;
    Vec2 v2(2.0f, 3.0f);
    Vec2 v3(3.0f, 4.0f);
    
    v1 -= v2;
    REQUIRE(v1.x == -2.0f);
    REQUIRE(v1.y == -3.0f);
    
    v3 -= v2;
    REQUIRE(v3.x == 1.0f);
    REQUIRE(v3.y == 1.0f);
}

TEST_CASE("testing_operator*=" , "[operator*=]")
{
    Vec2 v1;
    Vec2 v2(2.0f, 3.0f);
    float s(5.0f);
    
    v1 *= s;
    REQUIRE(v1.x == 0.0f);
    REQUIRE(v1.y == 0.0f);
    
    v2 *= s;
    REQUIRE(v2.x == 10.0f);
    REQUIRE(v2.y == 15.0f);
}

TEST_CASE("testing_operator/=" , "[operator/=]")
{
    Vec2 v1;
    Vec2 v2(12.0f, 12.0f);
    float s(3.0f);
  
    v1 /= s;
    REQUIRE(v1.x == 0.0f);
    REQUIRE(v1.y == 0.0f);
    
    v2 /= s;
    REQUIRE(v2.x == 4.0f);
    REQUIRE(v2.y == 4.0f);
}

// Aufgabe 2.4

TEST_CASE("testing_operator+" , "[operator+]")
{
    Vec2 a1;
    Vec2 a2(2.0f, 3.0f);
    Vec2 a3(3.5f, -2.0);
    
    a1 += a2;
    REQUIRE(a1.x == 2.0f);
    REQUIRE(a1.y == 3.0f);
    
    a2 += a3;
    REQUIRE(a2.x == 5.5f);
    REQUIRE(a2.y == 1.0f);
}

TEST_CASE("testing_operator-" , "[operator-]")
{
    Vec2 a1;
    Vec2 a2(2.0f, 3.0f);
    Vec2 a3(3.5f, -2.0);
    
    a1 -= a2;
    REQUIRE(a1.x == -2.0f);
    REQUIRE(a1.y == -3.0f);
    
    a2 -=a3;
    REQUIRE(a2.x == -1.5f);
    REQUIRE(a2.y == 5.0f);
}

TEST_CASE("testing_Vecoperator*" , "[Vecoperator*]")
{
    Vec2 a1;
    Vec2 a2(2.0f, -3.0f);
    float s(5.0f);
    
    a1 *= s;
    REQUIRE(a1.x == 0.0f);
    REQUIRE(a1.y == 0.0f);
    
    a2 *= s;
    REQUIRE(a2.x == 10.0f);
    REQUIRE(a2.y == -15.0f);
}

TEST_CASE("testing_operator/" , "[operator/]")
{
    Vec2 a1;
    Vec2 a2(10.0f, 5.0f);
    float s(2.0f);
    
    a2 /= s;
    REQUIRE(a2.x == 5.0f);
    REQUIRE(a2.y == 2.5f);
    
    a1 /= s;
    REQUIRE(a1.x == 0.0f);
    REQUIRE(a1.y == 0.0f);
}

TEST_CASE("testing_opertor*" , "[operator*]")
{
    Vec2 a1;
    Vec2 a2(2.0f, -3.0f);
    float s(5.0f);
    
    a1 *= s;
    REQUIRE(a1.x == 0.0f);
    REQUIRE(a1.y == 0.0f);
    
    a2 *= s;
    REQUIRE(a2.x == 10.0f);
    REQUIRE(a2.y == -15.0f);
}

//Aufgabe 2.5

TEST_CASE("testing_Mat2_operator*=" , "[operator=*]")
{
    Mat2 m1(0.0f, 0.0f, 0.0f, 0.0f);
    Mat2 m2(2.0f, 2.0f, 3.0f, 5.0f);
    Mat2 m3(1.5f, 1.0f, 0.0, -3.0f);
    
    m1 *= m2;
    REQUIRE(m1.x1 == 0.0f);
    REQUIRE(m1.x2 == 0.0f);
    REQUIRE(m1.y1 == 0.0f);
    REQUIRE(m1.y2 == 0.0f);
    
    m3 *= m2;
    REQUIRE(m3.x1 == 6.0f);
    REQUIRE(m3.x2 == 8.0f);
    REQUIRE(m3.y1 == -9.0f);
    REQUIRE(m3.y2 == -15.0f);
}

TEST_CASE("testing_Matoperator*" , "[Matoperator*]")
{
    Mat2 m1(0.0f, 0.0f, 0.0f, 0.0f);
    Mat2 m2(2.0f, 2.0f, 3.0f, 5.0f);
    Mat2 m3(1.5f, 1.0f, 0.0, -3.0f);
    
    m1 *= m2;
    REQUIRE(m1.x1 == 0.0f);
    REQUIRE(m1.x2 == 0.0f);
    REQUIRE(m1.y1 == 0.0f);
    REQUIRE(m1.y2 == 0.0f);
    
    m3 *= m2;
    REQUIRE(m3.x1 == 6.0f);
    REQUIRE(m3.x2 == 8.0f);
    REQUIRE(m3.y1 == -9.0f);
    REQUIRE(m3.y2 == -15.0f);
}

//Aufgabe 2.6

TEST_CASE("testing_operatorVec*Mat" , "[opertorVec*Mat]")
{
    Vec2 v1;
    Vec2 v2(5.0f, 5.0f);
    Mat2 m1;
    Mat2 m2(1.0f, 2.0f, -1.0f, 4.0f);
    
    v1 = v2 * m2;
    REQUIRE(v1.x == 15.0f);
    REQUIRE(v1.y == 15.0f);
}

TEST_CASE("testing_opertorMat*Vec" , "[opertorMat*Vec]")
{
    Vec2 v1;
    Vec2 v2(5.0f, 5.0f);
    Mat2 m1;
    Mat2 m2(1.0f, 2.0f, -1.0f, 4.0f);
    
    v1 = m2 * v2;
    REQUIRE(v1.x == 15.0f);
    REQUIRE(v1.y == 15.0f);
}

TEST_CASE("testing_inverse" , "[inverse]")
{
    Mat2 m1;
    Mat2 m2(5.0f, 3.0f, 4.5f, 2.0f);
    Mat2 m3(-1.0f, -4.5f, 5.0f, 0.0f);
    
    m1 = inverse(m2);
    REQUIRE(m1.x1 == Approx(-0.571429f));
    REQUIRE(m1.x2 == Approx(0.857143f));
    REQUIRE(m1.y1 == Approx(1.28571f));
    REQUIRE(m1.y2 == Approx(-1.42857f));
    
    m1 = inverse(m3);
    
    REQUIRE(m1.x1 == Approx(0.0f));
    REQUIRE(m1.x2 == Approx(0.2f));
    REQUIRE(m1.y1 == Approx(-0.222222f));
    REQUIRE(m1.y2 == Approx(-0.04444f));
}

TEST_CASE("testing_transponse" , "[transponse]")
{
    Mat2 m1;
    Mat2 m2(5.0f, 3.0f, 4.5f, 2.0f);
    Mat2 m3(-1.0f, -4.5f, 5.0f, 0.0f);
    
    m1 = transponse(m2);
    REQUIRE(m1.x1 == 5.0f);
    REQUIRE(m1.x2 == 2.0f);
    REQUIRE(m1.y1 == 4.5f);
    REQUIRE(m1.y2 == 3.0f);
    
    m1 = transponse(m3);
    REQUIRE(m1.x1 == -1.0f);
    REQUIRE(m1.x2 == 0.0f);
    REQUIRE(m1.y1 == 5.0f);
    REQUIRE(m1.y2 == -4.5f);
}
TEST_CASE("testing_Determinante" , "[det]")
{
    Mat2 m2(5.0f, 3.0f, 4.5f, 2.0f);
    Mat2 m3(-1.0f, -4.5f, 5.0f, 0.0f);
    float det1;
    float det2;
    
    det1 = det(m2);
    REQUIRE(det1 == -3.5f);
    
    det2 = det(m3);
    REQUIRE(det2 == 22.5f);
}
TEST_CASE("testing_make_rotation_mat2" , "[make_rotation_mat2]")
{
    float phi1 = 2 * M_PI;
    float phi2 = M_PI;
    Mat2 rotation;
    
    rotation = make_rotation_mat2(phi1);
    REQUIRE(rotation.x1 == Approx(-0.28369f));
    REQUIRE(rotation.x2 == Approx(-0.958916f));
    REQUIRE(rotation.y1 == Approx(0.958916f));
    REQUIRE(rotation.y2 == Approx(-0.28369f));
   
    rotation = make_rotation_mat2(phi2);
    REQUIRE(rotation.x1 == Approx(-0.59846f));
    REQUIRE(rotation.x2 == Approx(0.801153f));
    REQUIRE(rotation.y1 == Approx(-0.80115f));
    REQUIRE(rotation.y2 == Approx(-0.59846f));
}
//Aufgabe 2.8

TEST_CASE("testing_getterRectangle" , "[getterRectanlge]")
{
    Vec2 v1(5.0f, 3.0f);
    Vec2 v2(2.5f, -4.0f);
    Rectangle r1(v1, v2);
    Vec2 v3;
    Vec2 v4;
    
    v3 = r1.getMax_();
    REQUIRE(v3.x == 5.0f);
    REQUIRE(v3.y == 3.0f);
 
    v4 = r1.getMin_();
    REQUIRE(v4.x == 2.5f);
    REQUIRE(v4.y == -4.0f);
}

TEST_CASE("testing_CircleGetter" , "[getCircle]")
{
    Vec2 center1(2.5f, 2.5f);
    Vec2 center2(4.0f, 4.0f);
    Circle c1(3.5f, center1);
    Circle c2(2.0f, center2);
    float a1;
    float a2;
    Vec2 b1;
    Vec2 b2;
    
    a1 = c1.getRadius();
    REQUIRE(a1 == 3.5f);
    
    a2 = c2.getRadius();
    REQUIRE(a2 == 2.0f);
    
    b1 = c1.getCenter();
    REQUIRE(b1.x == 2.5f);
    REQUIRE(b1.y == 2.5f);
    
    b2 = c2.getCenter();
    REQUIRE(b2.x == 4.0f);
    REQUIRE(b2.y == 4.0f);
}

//Aufgabe 2.9

TEST_CASE ("testing_circumference_Rectangle" , "[circumferenceRect]")
{
    Vec2 v1(5.0f, 5.0f);
    Vec2 v2(0.0f, 4.0f);
    Vec2 v3(3.0f, 2.0f);
    Vec2 v4(-0.5f, 1.0f);
    Rectangle r1(v1, v2);
    Rectangle r2(v3, v4);
    
    float u1;
    float u2;
    
    u1 = r1.circumference();
    REQUIRE(u1 == 12.0f);
    
    u2 = r2.circumference();
    REQUIRE(u2 == 9.0f);
}

TEST_CASE("testing_circumferenceCircle" , "[CircleCircumference]")
{
    Vec2 center1(4.5f, 4.5f);
    Vec2 center2(5.5f, 5.5f);
    Circle c1(4.0f, center1);
    Circle c2(5.0f, center2);
    float u1;
    float u2;
    
    u1 = c1.circumference();
    REQUIRE(u1 == Approx(25.1327f));
    
    u2 = c2.circumference();
    REQUIRE(u2 == Approx(31.4159f));
}

TEST_CASE("testing_isInsideRectangle" , "[RectangleInside]")
{
    Vec2 v1(5.0f, 5.0f);
    Vec2 v2(0.0f, 4.0f);
    Vec2 v3(3.0f, 2.0f);
    Vec2 v4(-0.5f, 1.0f);
    Vec2 v5(6.6f, 6.6f);
    Vec2 v6(2.2f,2.2f);
    Rectangle r1(v1, v2);
    Rectangle r2(v3, v4);
    Rectangle r3(v5, v6);
    Vec2 pos1(2.5f, 4.5f);
    Vec2 pos2(5.0f, 5.0f);
    Vec2 pos3(2.2f, 2.2f);
    bool inside1;
    bool inside2;
    bool inside3;
    
    inside1 = r1.is_inside(pos1);
    REQUIRE(inside1 == true);
    
    inside2 = r2.is_inside(pos2);
    REQUIRE(inside2 == false);
    
    inside3 = r3.is_inside(pos3);
    REQUIRE(inside3 == true);
    
}

TEST_CASE("testing_isInsideCircle" , "[CircleInside]")
{
    Vec2 center1(4.5f, 4.5f);
    Vec2 center2(5.5f, 5.5f);
    Vec2 center(0.0f, 0.0f);
    Circle c1(4.0f, center1);
    Circle c2(5.0f, center2);
    Circle c3(20.0f, center);
    Vec2 pos1(5.0f, 5.0f);
    Vec2 pos2(20.0f, 20.0f);
    Vec2 pos3(0.0f, 20.0f);
    bool inside1;
    bool inside2;
    bool inside3;
    
    inside1 = c1.is_inside(pos1);
    REQUIRE(inside1 == true);
    
    inside2 = c2.is_inside(pos2);
    REQUIRE(inside2 == false);

    //Genau auf Kreis
    inside3 = c3.is_inside(pos3);
    REQUIRE(inside3 == true);
    
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

