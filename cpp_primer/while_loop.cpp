// @siliconx
// 2017-06-19 08:01:02
#include <iostream>
#define N 999999999

int main() {
    long sum = 0, val = 0;
    while (val <= N) {
        sum += val;
        ++val;
    }
    std::cout << "sum of 1 to " << N << " inclusive is " << sum << std::endl;
    return 0;
}

