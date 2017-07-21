// @siliconx
// 2017-06-19 08:20:15
#include <iostream>

int main() {
    int sum = 0, val = 0;
    while (std::cin >> val) {
        sum += val;
    }
    std::cout << "sum is " << sum << std::endl;
    return 0;
}

