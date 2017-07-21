// @siliconx
// 2017-06-19 08:48:30
#include <iostream>

int main() {
    int curr_val = 0, val = 0;
    if (std::cin >> curr_val) {
        int cnt = 1;
        while (std::cin >> curr_val) {
            if (val == curr_val) {
                    ++cnt;
            } else {
                    std::cout << curr_val << " occurs " << cnt << " times" << std::endl;
            }
        }
        std::cout << curr_val << " occurs " << cnt << " times" << std::endl;
    }
}

