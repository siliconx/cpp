// @siliconx
// 2017-07-29 11:18:41
#include <iostream>

int main() {
    using namespace std;

    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more. ";
    carrots += 2;
    cout << "Now you have " << carrots << " carrots." << endl;
}

