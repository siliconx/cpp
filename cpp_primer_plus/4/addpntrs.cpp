// @siliconx
// 2017-08-02 15:51:47
#include<iostream>

int main() {
    using std::cout;
    using std::endl;

    double wages[3] = {100, 200, 300};
    short stacks[3] = {3, 2, 1};

    double* pw = wages;
    short* ps = &stacks[0];

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw += 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
    ps++;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "sizeof (pw) = " << sizeof (pw) << endl;
    cout << "sizeof (ps) = " << sizeof (ps) << endl;

    cout << "sizeof (wages) = " << sizeof (wages) << endl;
    cout << "sizeof (stacks) = " << sizeof (stacks) << endl;

    cout << "*(wages + 1) = " << *(wages + 1) << endl;
    cout << "wages = " << wages << ", &wages = " << &wages << endl;
    cout << "wages + 1 = " << wages + 1 << ", &wages + 1 = " << &wages + 1 << endl;
    return 0;
}

