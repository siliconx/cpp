// @siliconx
// 2017-08-03 14:14:33
#include<iostream>

int main() {
    using namespace std;
    char c;
    int count = 0;
    cout << "Enter characters; enter `Ctrl+D` to quit:\n";
    cin.get(c);
    while (cin) {
        cout << c;
        ++count;
        cin.get(c);
    }
    cout << endl << count << " chars read\n";
    return 0;
}

