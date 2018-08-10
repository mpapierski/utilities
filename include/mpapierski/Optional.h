#pragma once

#if __has_include(<optional>)
#include <optional>
#define MPAPIERSKI_OPTIONAL_PREFIX__ std::
#elif __has_include(<experimental/optional>)
#include <experimental/optional>
#define MPAPIERSKI_OPTIONAL_PREFIX__ std::experimental::
#else
#error Unsupported
#endif

namespace mpapierski {

template <typename T> using optional = MPAPIERSKI_OPTIONAL_PREFIX__ optional<T>;
inline constexpr auto nullopt = MPAPIERSKI_OPTIONAL_PREFIX__ nullopt;
}
