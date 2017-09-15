// @siliconx
// 2017-07-31 16:40:17
#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "chest = " << chest << " (decimal for 42)" << endl;

    cout << std::hex;
    cout << "waist = " << waist << " (hexadecimal for 42)" << endl;

    cout << std::oct;
    cout << "inseam = " << inseam << " (octal for 42)" << endl;
    return 0;
}

