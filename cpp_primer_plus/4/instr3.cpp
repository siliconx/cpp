// @siliconx
// 2017-08-01 20:11:20
#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout <<  "Enter your name:\n";
    cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert
        << " for you, " << name << endl;
    return 0;
}
