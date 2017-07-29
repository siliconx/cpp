// @siliconx
// 2017-06-19 11:10:23
#include <iostream>

int main() {
    int i = 0;
    int &j = i;
    j = 10;
    std::cout << i << std::endl;
    return 0;
}

