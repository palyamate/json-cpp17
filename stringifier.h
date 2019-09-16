//
// Created by palya on 2019. 09. 16..
//

#ifndef JSON_CPP17_STRINGIFIER_H
#define JSON_CPP17_STRINGIFIER_H

#include <string>
#include "json_fwd.h"
#include "jsonvar.h"

class stringifier {

private:

    std::string indent_string;

    size_t indent_level;

public:

    stringifier(char indent_char = ' ', size_t indent_size = 4)
            : indent_string(indent_char, indent_size), indent_level(0) { }

    JSONVAR_TPL_DECL
    std::string stringify(const JSONVAR_TPL_TYPE& var, bool pretty = false) {
        std::string result;
        if (var.is_object()) {
            auto obj = var.template get<typename JSONVAR_TPL_TYPE::object_t>();
            result += '{';
            for (auto j : obj) {
                result += '\"' + j.first + '\"' + ':' + stringify(j.second) + ',';
            }
            result[result.length() - 1] = '}';
        } else if (var.is_array()) {
            auto arr = var.template get<typename JSONVAR_TPL_TYPE::array_t>();
            result += '[';
            for (auto j : arr) {
                result += stringify(j) + ',';
            }
            result[result.length() - 1] = ']';
        } else if (var.is_string()) {
            result += '\"' + var.template get<typename JSONVAR_TPL_TYPE::string_t>() + '\"';
        } else if (var.is_floating_point()) {
            result += std::to_string(var.template get<typename JSONVAR_TPL_TYPE::float_t>());
        } else if (var.is_integer()) {
            result += std::to_string(var.template get<typename JSONVAR_TPL_TYPE::integer_t>());
        } else if (var.is_unsigned()) {
            result += std::to_string(var.template get<typename JSONVAR_TPL_TYPE::uint_t>());
        } else if (var.is_boolean()) {
            if (var.template get<typename JSONVAR_TPL_TYPE::bool_t>()) {
                result += "true";
            } else {
                result += "false";
            }
        } else if (var.is_null()) {
            result += "null";
        }
        return result;
    }


};

#endif //JSON_CPP17_STRINGIFIER_H
