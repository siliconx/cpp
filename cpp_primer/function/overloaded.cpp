// @siliconx
// 2017-06-22 10:29:53
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int print(const string&);
int print(const int);

int main() {
    print("asdf");
    print(1);
}

int print(const string &str) {
    cout << "string: " << str << endl;
    return 0;
}

int print(const int n) {
    cout << "integer: " << n << endl;
    return 0;
}

