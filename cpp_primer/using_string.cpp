// @siliconx
// 2017-06-19 20:42:00
#include <iostream>
#include <string>

using namespace std;


int main() {
    string a(10, 'a');
    cout << a << a.size() << a[99] << endl;
    cin >> a;
    cout << a << endl;
    for (char &c : a) {
        c++;
    }
    char &c = a[0];
    c++;
    cout << a << endl;
    return 0;
}

