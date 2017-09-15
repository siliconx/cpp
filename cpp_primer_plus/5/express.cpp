// @siliconx
// 2017-08-03 10:56:48
#include<iostream>

int main() {
    using namespace std;

    int x;

    cout << "The expression x = 100 has the value " << (x = 100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value " << (x < 3) << endl;
    cout << "The expression x > 3 has the value " << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);
    cout << "After set `cout.setf(ios_base::boolalpha)`:" << endl;
    cout << "The expression x < 3 has the value " << (x < 3) << endl;
    cout << "The expression x > 3 has the value " << (x > 3) << endl;

}

