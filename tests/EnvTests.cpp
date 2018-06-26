#define CATCH_CONFIG_MAIN

#include "mpapierski/Env.h"

#include "catch.hpp"

TEST_CASE("Invalid env variable", "[env]") {
  auto value = mpapierski::getEnv("UNITTEST");
  REQUIRE(value == std::nullopt);
}

TEST_CASE("Valid env var", "[env]") {
  struct Scoped {
    Scoped() { ::setenv("UNITTEST", "Value", 1); }
    ~Scoped() { ::unsetenv("UNITTEST"); }
  } scoped;
  auto value = mpapierski::getEnv("UNITTEST");
  REQUIRE(value == "Value");
}
