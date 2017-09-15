#include <iostream>

template <typename T>
void Swap(T &a, T &b);

int main() {
    using namespace std;

    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Using compiler-generated int swapper:\n";
    Swap(i, j);
    cout << "Now, i, j = " << i << ", " << j << endl;

    double x = 2.3;
    double y = 3.4;
    cout << "x, y = " << x << ", " << y << endl;
    cout << "Using compiler-generated int swapper:\n";
    Swap(x, y);
    cout << "Now, x, y = " << x << ", " << y << endl;
    return 0;
}

template <typename T>
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
