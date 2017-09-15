#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    int auks, bats, coots;

    // the following statement adds the values as double
    // then converts the result to int
    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99;  // old C syntax
    coots = int(19.99) + int(11.99);  // new C++ syntax
    cout << "auks = " << auks << ", bats = " << bats
         << ", coots = " << coots << endl;

    char c = 'Z';
    cout << "The code for " << c << " is " << int(c) << endl;
    cout << "Yes, the code is " << static_cast<int>(c) << endl;
    return 0;
}
