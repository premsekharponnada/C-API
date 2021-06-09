#define CATCH_CONFIG_MAIN
#include "lib/catch_amalgamated.hpp"
#include "src/helloworld.cpp"

TEST_CASE("Check the Hello World")
{
    CHECK(main() == "Hello World")
}
