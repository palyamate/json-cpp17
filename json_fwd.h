//
// Created by palya on 2019. 09. 16..
//

#ifndef JSON_CPP17_JSON_FWD_H
#define JSON_CPP17_JSON_FWD_H

#include <map>
#include <vector>

#define JSONVAR_TPL_DECL template   <template<class U, class V, class ...Args> class Object = std::map,             \
                                    template<class U, class ...Args> class Array = std::vector,                     \
                                    class String = std::string, template<class U> class Alloc = std::allocator>     \

#define JSONVAR_TPL_TYPE jsonvar<Object, Array, String, Alloc>

JSONVAR_TPL_DECL
class jsonvar;

using json = jsonvar<>;

#endif //JSON_CPP17_JSON_FWD_H
