#include "catch.hpp"
#include "mpapierski/Optional.h"
#include <string>

using namespace std::literals;

TEST_CASE("Optional works", "[optional]") {
  auto value = mpapierski::make_optional("Foo"s);
  REQUIRE(value == "Foo"s);
  REQUIRE(value != mpapierski::nullopt);
}
