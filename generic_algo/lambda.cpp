// @siliconx
// 2017-07-12 09:48:58
#include <iostream>
#include <algorithm>

int main() {
    auto f = [] {return 43;};
    std::cout << f() << std::endl;
}

