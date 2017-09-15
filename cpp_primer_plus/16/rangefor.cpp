// @siliconx
// 2017-08-27 10:59:31
#include <iostream>
#include <vector>

int test(int);

int main() {
    std::vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    for (auto& e : v) {
        ++e;
    }

    for (auto& e : v) {
        std::cout << e << std::endl;
    }

    std::cout << '\n' << test(10) << std::endl;
    return 0;
}

int test(int) {
    return 0;
}

