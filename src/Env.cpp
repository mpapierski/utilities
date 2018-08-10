#include "mpapierski/Env.h"
#include <cstdlib>

namespace mpapierski {

optional<std::string_view> getEnv(std::string_view name) {
  char *value = std::getenv(name.data());
  if (value == nullptr) {
    return mpapierski::nullopt;
  }
  return {value};
}

} // namespace mpapierski
