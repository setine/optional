#include "catch.hpp"
#include "optional.hpp"
#include <utility>
#include <tuple>

TEST_CASE("Emplace", "[emplace]") {
    tl::optional<std::pair<std::pair<int,int>, std::pair<double, double>>> i;
    i.emplace(std::piecewise_construct, std::make_tuple(0,2), std::make_tuple(3,4));
    REQUIRE(i->first.first == 0);
    REQUIRE(i->first.second == 2);
    REQUIRE(i->second.first == 3);
    REQUIRE(i->second.second == 4);    
}
