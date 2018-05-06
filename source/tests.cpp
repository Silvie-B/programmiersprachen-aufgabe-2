#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "Vec2.hpp"
/*
TEST_CASE("testing_standard_constuctor , "[Vec2])"
{
    Vec2 v1;
    Vec2 v2{2.0, 3.0};
    REQUIRE(v1.x == 0.0f);
    REQUIRE(v1.y == 0.0f);
    
    REQUIRE(v2.x == 0.0f);
    REQUIRE(v2.y == 0.0f);
}

TEST_CASE("testing_user_constructor" , "[Vec2(float x, float y[")
{
    Vec2 v1;
    Vec2 v2{2.0, 3.0};
    TEST_CASE(v1.x == 0.0f);
    TEST_CASE(v1.y == 0.0f);
    
    TEST_CASE(v2.x == 2.0);
    TEST_CASE(v2.y == 3.0);
}*/

TEST_CASE("testing_operator+=" , "[operator+=]") //Test des =+ Operators weitere hinzufügen
{
    Vec2 v1;
    Vec2 v2{2.0f, 3.0f};
    Vec2 v3{3.0f, 4.0f};
    
    v1 += v2;
    REQUIRE(v1.x == 2.0f);
    REQUIRE(v1.y == 3.0f);
    
    v1 += v3;
    REQUIRE(v1.x == 5.0f);
    REQUIRE(v1.y == 7.0);
    
    v2 += v3;
    REQUIRE(v2.x == 5.0f);
    REQUIRE(v2.y == 7.0f);
}

TEST_CASE("testing_operator-=" , "[operator -=]")
{
    Vec2 v1;
    Vec2 v2{2.0f, 3.0f};
    Vec2 v3{3.0f, 4.0f};
    
    v1 -= v2;
    REQUIRE(v1.x == 0.0f);
    REQUIRE(v1.y == 0.0f);
    
    v3 -= v2;
    REQUIRE(v3.x == 1.0f);
    REQUIRE(v3.y == 1.0f);
}

TEST_CASE("testing_operator*=" , "[operator*=]")
{
    Vec2 v1;
    Vec2 v2{2.0f, 3.0f};
    Vec2 v3{3.0f, 4.0f};
    
    v1 *= v2;
    REQUIRE(v1.x == 2.0f);
    REQUIRE(v1.y == 3.0f);
    
    v2 *= v3;
    REQUIRE(v2.x == 6.0f);
    REQUIRE(v2.y == 12.0f);
}

TEST_CASE("testing_operator/=" , "[operator/=]")
{
    Vec2 v1;
    Vec2 v2{12.0ff, 12.0f};
    Vec2 v3{2.0f, 3.0f};
  
    
    v1 /= v2;
    REQUIRE(v1.x == 0.0f);
    REQUIRE(v.y == 0.0f);
    
    v2 /= v3;
    REQUIRE(v2.x == 6.0f);
    REQUIRE(v2.y == 4.0f);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
