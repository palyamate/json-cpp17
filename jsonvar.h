//
// Created by palya on 2019. 09. 16..
//

#ifndef JSON_CPP17_JSONVAR_H
#define JSON_CPP17_JSONVAR_H

#include <variant>
#include "json_fwd.h"

template <template<class, class, class...> class Object,
          template<class, class...> class Array,
          class String, template<class> class Alloc>
class jsonvar {

public:

    using object_t = Object<String, jsonvar, std::less<>, Alloc<std::pair<String, jsonvar>>>;
    using array_t = Array<jsonvar, Alloc<jsonvar>>;
    using string_t = String;
    using integer_t = int64_t;
    using float_t = double;
    using uint_t = uint64_t;
    using bool_t = bool;

private:

    std::variant<object_t, array_t, string_t, float_t, integer_t, uint_t, bool_t, std::monostate> var;

public:

    jsonvar(std::nullptr_t = nullptr) noexcept : var(std::monostate{}) { }

    jsonvar(object_t obj) : var(obj) { }

    jsonvar(array_t arr) : var(arr) { }

    jsonvar(string_t str) : var(str) { }

    template <typename T, typename std::enable_if<std::is_floating_point_v<T>>::type* = nullptr>
    jsonvar(T d) noexcept : var(std::in_place_type<float_t>, d) { }

    template <typename T, typename std::enable_if<std::is_arithmetic_v<T> && !std::is_floating_point_v<T> && std::is_signed<T>::value>::type* = nullptr>
    jsonvar(T i) noexcept : var(std::in_place_type<integer_t>, i) { }

    template <typename T, typename std::enable_if<std::is_arithmetic_v<T> && !std::is_floating_point_v<T> && std::is_unsigned<T>::value>::type* = nullptr>
    jsonvar(T u) noexcept : var(std::in_place_type<uint_t>, u) { }

    jsonvar(bool_t b) noexcept : var(b) { }

    jsonvar(const jsonvar&) = default;
    jsonvar& operator=(const jsonvar&) = default;
    jsonvar(jsonvar&&) = default;
    jsonvar& operator=(jsonvar&&) = default;

    constexpr bool is_object() const noexcept {
        return std::holds_alternative<object_t>(var);
    }

    constexpr bool is_array() const noexcept {
        return std::holds_alternative<array_t>(var);
    }

    constexpr bool is_string() const noexcept {
        return std::holds_alternative<string_t>(var);
    }

    constexpr bool is_floating_point() const noexcept {
        return std::holds_alternative<double>(var);
    }

    constexpr bool is_integer() const noexcept {
        return std::holds_alternative<int64_t>(var);
    }

    constexpr bool is_unsigned() const noexcept {
        return std::holds_alternative<uint64_t>(var);
    }

    constexpr bool is_null() const noexcept {
        return std::holds_alternative<std::monostate>(var);
    }

    constexpr bool is_boolean() const noexcept {
        return std::holds_alternative<bool>(var);
    }

    template <typename T>
    T get() const {
        return std::get<T>(var);
    }

    template <typename T>
    T& get() {
        return std::get<T>(var);
    }

    bool operator==(const jsonvar& other) const noexcept {
        return var == other.var;
    }

    bool operator!=(const jsonvar& other) const noexcept {
        return var != other.var;
    }

    jsonvar& operator[](const string_t& key) {
        if (std::holds_alternative<std::monostate>(var)) {
            var = object_t{ };
        }
        if (auto p_object = std::get_if<object_t>(&var)) {
            return (*p_object)[key];
        } else {
            throw std::runtime_error("Not an object");
        }
    }

    const jsonvar& operator[](const string_t& key) const {
        if (auto p_object = std::get_if<object_t>(&var)) {
            if (p_object->find(key) == std::end(*p_object)) {
                throw std::runtime_error("Not existing key");
            }
            return (*p_object)[key];
        } else {
            throw std::runtime_error("Not an object");
        }
    }

    jsonvar& operator[](size_t index) {
        if (auto p_array = std::get_if<array_t>(&var)) {
            if (index >= p_array->size() || index < 0) {
                throw std::out_of_range("Bad index");
            }
            return (*p_array)[index];
        } else {
            throw std::runtime_error("Not an array");
        }
    }

    const jsonvar& operator[](size_t index) const {
        if (auto p_array = std::get_if<array_t>(&var)) {
            if (index >= p_array->size() || index < 0) {
                throw std::out_of_range("Bad index");
            }
            return (*p_array)[index];
        } else {
            throw std::runtime_error("Not an array");
        }
    }



};



#endif //JSON_CPP17_JSONVAR_H
