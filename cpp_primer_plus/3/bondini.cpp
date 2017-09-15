// @siliconx
// 2017-07-31 17:32:44
#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "\007Operatioin \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:____\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
    wchar_t bob = L'P';
    std::wcout << bob << L" tall" << endl;
    return 0;
}

