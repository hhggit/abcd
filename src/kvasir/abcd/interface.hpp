#pragma once
namespace kvasir {
namespace abcd {
/// Use this to associate abilities with an agent without specializing traits
template <template <typename...> class...>
struct interface_t {};

template <template <typename...> class... Ts>
constexpr interface_t<Ts...> interface{};

template <template <typename...> class... Ts>
struct pub_interface_t {
  using pub_interface = interface_t<Ts...>;
};

} // namespace abcd
} // namespace kvasir
