// @siliconx
// 2017-08-02 11:28:35
#include<iostream>

int main() {
    using std::cout;
    using std::endl;

    int updates = 6;
    int *p_updates = &updates;
    *p_updates = 9;

    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Address: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    int* p = (int*) 0;
    cout << *p;
    return 0;
}

