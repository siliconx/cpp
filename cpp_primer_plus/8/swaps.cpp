#include <iostream>

void swapr(int&, int&);
void swapp(int*, int*);
void swapv(int, int);

int main() {
    using namespace std;

    int a = 300;
    int = 500;

    cout << "Init:\n";
    cout << "a = " << a << ", b = " << b << endl;

    cout << "Using references to swap contents:\n";
    swapr(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    cout << "Using pointer to swap contents:\n";
    swapp(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    cout << "Using value to swap contents:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

void swapr(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapp(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapv(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
