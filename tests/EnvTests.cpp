#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "mpapierski/Env.h"
#include <string_view>

using namespace std::literals;

TEST_CASE("Invalid env variable", "[env]") {
  auto value = mpapierski::getEnv("UNITTEST");
  REQUIRE(value == mpapierski::nullopt);
}

TEST_CASE("Valid env var", "[env]") {
  struct Scoped {
    Scoped() { ::setenv("UNITTEST", "Value", 1); }
    ~Scoped() { ::unsetenv("UNITTEST"); }
  } scoped;
  auto value = mpapierski::getEnv("UNITTEST");
  REQUIRE(value == "Value"sv);
}
