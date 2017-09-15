// @siliconx
// 2017-08-02 11:42:49
#include<iostream>

int main() {
    using std::cout;
    using std::endl;

    int nights = 1001;
    int* pt = new int;
    *pt = 10;

    cout << "nights value = " << nights
        << ": location " << &nights << endl;

    cout << "int value = " << *pt << ": location = "
        << pt << endl;
    delete pt;
}
