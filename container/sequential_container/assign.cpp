// @siliconx
// 2017-07-08 17:49:27
#include <iostream>
#include <vector>

#define N 19

using namespace std;

int main() {
    vector<int> a;
    for (int i = 0; i < N; ++i) {
        a.push_back(i);
    }

    for (int i=0; i < N; ++i) {
        cout << &a[i] << endl;
    }

    cout << endl;

    vector<int> b = a;
    for (int i=0; i < N; ++i) {
        cout << b.at(i) << ": " << &b[i + 1] << endl;
    }
    cout << "a: " << &a << ", b: " << &b << endl;
    swap(a, b);
    cout << "a: " << &a << ", b: " << &b << endl;
    cout << a.max_size() << endl;
    a.reserve(100);
    cout << a.capacity() << endl;
    return 0;
}

