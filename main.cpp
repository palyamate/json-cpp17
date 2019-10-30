#include <iostream>
#include "jsonvar.h"
#include "stringifier.h"

int main() {
    /*j["numbers"] = std::vector<json>{0, 0, 0, 0, 0, 0};
    j["numbers"][2] = 3;
    j["numbers"][4] = 12.0;
    j["boolean"] = true;
    j["null"];
    j["key"]["a"] = 1;
    j["key"]["b"] = 2;*/
    stringifier s;
    std::cout << s.prettify(j);
    return 0;
}