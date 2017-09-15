#include <iostream>
#include "mytime2.h"

int main() {
    using std::cout;
    using std::endl;

    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.show();
    cout << endl;

    cout << "coding time = ";
    coding.show();
    cout << endl;

    cout << "fixing time = ";
    fixing.show();
    cout << endl;

    total = coding + fixing;
    cout << "coding + fixing = ";
    total.show();
    cout << endl;

    total = total + planning;
    cout << "planning + coding + fixing = ";
    total.show();
    cout << endl;

    Time sub = fixing - coding;
    cout << "fixing - coding = ";
    sub.show();
    cout << endl;

    Time mul = fixing * 2;
    cout << "fixing * 2 = ";
    mul.show();
    cout << endl;

    return 0;
}