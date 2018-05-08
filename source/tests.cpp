#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "Vec2.hpp"

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


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

