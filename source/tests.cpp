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

TEST_CASE ("testing_circumference_Rectangle" , "[circumferenceRect]")
{
    Rectangle r1;
    Rectangle r2;
    Rectangle r3;
    float u1;
    float u2;
    float u3;
    
    u1 = r1.circumference(5.0f, 5.0f);
    REQUIRE(u1 == 20.0f);
    
    u2 = r2.circumference(3.0f, 1.0f);
    REQUIRE(u2 == 8.0f);
    
    u3 = r3.circumference(-0.5f, 2.0f);
    REQUIRE(u3 == 0.0f);
}

TEST_CASE("testing_CircleGetter" , "[getCircle]")
{
    Circle c1(2.5f, 3.5f);
    Circle c2(4.0f, 2.0f);
    float a1;
    float a2;
    float b1;
    float b2;
    
    a1 = c1.getRadius();
    REQUIRE(a1 == 2.5f);
    
    a2 = c2.getRadius();
    REQUIRE(a2 == 4.0f);
    
    b1 = c1.getCenter();
    REQUIRE(b1 == 3.5f);
    
    b2 = c2.getCenter();
    REQUIRE(b2 == 2.0f);
}

TEST_CASE("testing_circumferenceCircle" , "[CircleCircumference]")
{
    Circle r1(4.0f, 4.5f);
    Circle r2(5.0f, 5.5f);
    float u1;
    float u2;
    
    u1 = r1.circumference(r1.radius);
    REQUIRE(u1 == Approx(25.1327f));
    
    u2 = r2.circumference(r2.radius);
    REQUIRE(u2 == Approx(31.4159f));
    
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

