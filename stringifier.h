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

    size_t indent_level;

public:

    stringifier()
            : indent_level(0) { }

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
        } else {
            result += stringify_simple_types(var);
        }
        return result;
    }

    JSONVAR_TPL_DECL
    std::string prettify(const JSONVAR_TPL_TYPE& var, char indent_char = ' ', size_t indent_size = 4) {
        std::string result;
        std::string indent_string(indent_size, indent_char);
        if (var.is_object()) {
            auto obj = var.template get<typename JSONVAR_TPL_TYPE::object_t>();
            if (obj.empty()) {
                return "{}";
            }
            result += "{";
            ++indent_level;
            for (auto j = std::begin(obj); j != std::end(obj); ++j) {
                if (j == std::begin(obj)) {
                    result += '\n' + indent(indent_string) + '\"' + j->first + '\"' + " : " + prettify(j->second);
                } else {
                    result += ",\n" + indent(indent_string) + '\"' + j->first + '\"' + " : " + prettify(j->second);
                }
            }
            --indent_level;
            result += '\n' + indent(indent_string) + '}';
        } else if (var.is_array()) {
            auto arr = var.template get<typename JSONVAR_TPL_TYPE::array_t>();
            if (arr.empty()) {
                return "[]";
            }
            result += "[";
            ++indent_level;
            for (auto j = std::begin(arr); j != std::end(arr); ++j) {
                if (j == std::begin(arr)) {
                    result += '\n' + indent(indent_string) + prettify(*j);
                } else {
                    result += ",\n" + indent(indent_string) + prettify(*j);
                }
            }
            --indent_level;
            result += '\n' + indent(indent_string) + ']';
        }  else {
            result += stringify_simple_types(var);
        }
        return result;
    }

private:

    JSONVAR_TPL_DECL
    std::string stringify_simple_types(const JSONVAR_TPL_TYPE& var) {
        std::string result;
        if (var.is_string()) {
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

    std::string indent(const std::string& indent_string) {
        std::string ret;
        for (size_t i = 0; i < indent_level; ++i) {
            ret += indent_string;
        }
        return ret;
    }

};

#endif //JSON_CPP17_STRINGIFIER_H
