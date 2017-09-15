// @siliconx
// 2017-08-10 21:31:44
#include <iostream>

int main() {
    using namespace std;
    int rats = 101;
    int& rodents = rats;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats
        << ", rodents address = " << &rodents << endl;
    return 0;
}

