#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "Vec2.hpp"

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


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
