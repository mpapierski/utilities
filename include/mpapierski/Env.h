#pragma once

#include "mpapierski/Optional.h"
#include <string_view>

namespace mpapierski {

/**
 * The getEnv() function obtains the current value of the environment variable,
 * name.
 * @param name Environment variable name
 * @return Returns an optional string if the variable exists, nullopt otherwise.
 */
mpapierski::optional<std::string_view> getEnv(std::string_view name);

} // namespace mpapierski
