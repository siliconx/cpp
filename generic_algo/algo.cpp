// @siliconx
// 2017-07-10 09:40:13
#include <iostream>
#include <numeric>
#define N 4

using namespace std;

int main(void) {
    int array[N];
    for (int i = 0; i < N; ++i) {
        array[i] = i;
    }
    cout << accumulate(begin(array), end(array), 0) << endl;
}

