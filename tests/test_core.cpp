#include "core/state.hpp"
#include <catch2/catch_all.hpp>

TEST_CASE("Default state is zeroed", "[state]") {
  quad::State s;

  REQUIRE(s.z == Catch::Approx(0.0));
  REQUIRE(s.vz == Catch::Approx(0.0));
  REQUIRE(s.yaw == Catch::Approx(0.0));
  REQUIRE(s.yaw_rate == Catch::Approx(0.0));
}
