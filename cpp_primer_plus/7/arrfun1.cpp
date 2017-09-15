// @siliconx
// 2017-08-07 19:02:54
#include <iostream>

const int SIZE = 8;

int sum_array(int[], int);

int main() {
    using namespace std;

    int cookies[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = sum_array(cookies, SIZE);
    cout << "Total cookies aten: " << sum << endl;
    return 0;
}

int sum_array(int array[], int n) {
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }

    return sum;
}
