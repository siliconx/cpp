// @siliconx
// 2017-07-18 20:16:59
#include <iostream>
#define N 999999999

int main() {
    int *p = new int;
    for (int i = 0; i < N; ++i) {
        p = new int;
        delete p;
    }
    std::cout << *p << std::endl;
    return 0;
}

