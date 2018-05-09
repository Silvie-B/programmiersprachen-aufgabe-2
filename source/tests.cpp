#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "Vec2.hpp"
#include "mat2.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

TEST_CASE("testing_constr" , "[Constr]")
{
    //Tests für Standard
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
/*
TEST_CASE("testing_operator+" , "[operator+]")
{
    
}

TEST_CASE("testing_operator-" , "[operator-]")
{
    
}

TEST_CASE("testing_operator*" , "[operator*]")
{
    
}

TEST_CASE("testing_operator/" , "[operator/]")
{
    
}

TEST_CASE("testing_opertor*" , "[operator*]")
{
    
}

//Aufgabe 2.5
*/
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
/*
TEST_CASE("testing_operator*" , "[operator+]")
{
    
}

//Aufgabe 2.6

TEST_CASE("testing_operator*" , "[opertor*]")
{
    
}

TEST_CASE("testong_opertor*" , "[opertor*]")
{
    
}

TEST_CASE("testing_inverse" , "[inverse]")
{

}

//Aufgabe 2.8

TEST_CASE("testing_getMax_" , "[getMax_]")
{
    REQUIRE(getMax_(5.0f) == 5.0f);
}*/
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

