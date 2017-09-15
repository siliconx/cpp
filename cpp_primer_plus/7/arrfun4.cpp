#include <iostream>

const int SIZE = 8;

int sum_array(const int* begin, const int* end);

int main() {
    using namespace std;

    int cookies[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};

    int sum = sum_array(cookies, cookies + SIZE);
    cout << "Total cookies eaten: " << sum << endl;

    sum = sum_array(cookies, cookies+ 3);
    cout << "First three eaters ate " << sum << endl;
    return 0;
}

int sum_array(const int* begin, const int* end) {
    const int* pt;
    int sum = 0;
    for (pt = begin; pt != end; ++pt) {
        sum += *pt;
    }

    return sum;
}
