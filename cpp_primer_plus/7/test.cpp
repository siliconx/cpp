// @siliconx
// 2017-08-06 11:12:43
#include <iostream>

int test(int);

int main() {
    double a = 2.0;
    std::cout << test(a);
    return 0;
}

int test(int x) {
    return x;
}

