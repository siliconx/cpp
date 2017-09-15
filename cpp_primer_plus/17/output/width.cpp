#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    int w = cout.width(30);
    cout << "default field width = " << w << ":\n";

    cout << "after execute cout.width(30), now cout.width() = "
        << cout.width() << endl;
    cout.width(5);
    cout << "N" << ':';
    cout.width(8);
    cout << "N * N" << ":\n";

    for (long i = 1; i <= 100; i *= 10) {
        cout.width(5);
        cout << i << ':';
        cout.width(8);
        cout << i * i << ":\n";
    }

    return 0;
}
