// @siliconx
// 2017-07-31 16:40:17
#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist = " << waist << " (42 in hex)\n";
    cout << "inseam = " << inseam << " (42 in oct)\n";
    return 0;
}

