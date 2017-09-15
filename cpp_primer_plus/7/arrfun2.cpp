// @siliconx
// 2017-08-07 19:02:54
#include <iostream>

const int SIZE = 8;

int sum_array(int[], int);

int main() {
    int cookies[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    std::cout << cookies << " = array address, ";
    std::cout << sizeof cookies << " = sizeof cookies" << std::endl;

    int sum = sum_array(cookies, SIZE);
    std::cout << "Total cookies eaten: " << sum << std::endl;

    sum =sum_array(cookies, 3);
    std::cout << "First three eaters ate " << sum << " cookies.\n";

    sum = sum_array(cookies + 4, 4);
    std:: cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;
}

int sum_array(int array[], int n) {
    int sum = 0;

    std::cout << array << " = array, " << sizeof array << " = sizeof array.\n";
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }

    return sum;
}
