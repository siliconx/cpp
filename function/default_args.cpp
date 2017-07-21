// @siliconx
// 2017-06-22 10:43:32
#include <iostream>

using std::cout;
using std::endl;

int test(int=0, int=0);

int main() {
    test();
    test(9);
    test(1,2);
}

int test(int i, int j) {
    cout << i + j << endl;
    return i + j;
}

