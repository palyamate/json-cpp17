#include <iostream>
#include "jsonvar.h"
#include "stringifier.h"

int main() {
    json j;
    j["numbers"] = std::vector<json>{0, 0, 0, 0, 0, 0};
    j["numbers"][2] = 3;
    j["numbers"][4] = 12.0;
    j["boolean"] = true;
    j["null"];
    stringifier s;
    std::cout << s.stringify(j);
    return 0;
}