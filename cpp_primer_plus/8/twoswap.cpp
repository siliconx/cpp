#include <iostream>

template <typename T>
void Swap(T&, T&);

struct job {
    char name[40];
    double salary;
    int floor;
};

template <> void Swap<job>(job& a, job& b);

void show(job&);

int main() {
    using namespace std;

    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Using compiler-generated int swapper:\n";
    Swap(i, j);
    cout << "Now, i, j = " << i << ", " << j << endl;

    job sue = {"Susan", 23.3, 4};
    job sidney = {"Sidney", 43.2, 5};
    cout << "Before job swapping:\n";
    show(sue);
    show(sidney);
    Swap(sue, sidney);
    cout << "After job swapping:\n";
    show(sue);
    show(sidney);
}

template <typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <> void Swap<job>(job& a, job& b) {
    double double_t = a.salary;
    int int_t = a.floor;
    a.salary = b.salary;
    a.floor = b.floor;
    b.salary = double_t;
    b.floor = int_t;
}

void show(job& j) {
    using namespace std;
    cout << j.name << ": $" << j.salary <<
    " on floor " << j.floor << endl;
}
