// @siliconx
// 2017-07-04 11:56:09
#include <iostream>
#include <vector>
using namespace std;

int add(vector<int>);

int main() {
    vector<int> ints;
    ints.push_back(0);
    cout<<&ints<<endl;
    for (int i = 0; i < 10; ++i) {
        ints.push_back(i);
    }
    cout<<&ints<<endl;
    add(ints);
    return 0;
}

int add(vector<int> vctr) {
    cout << &vctr << endl;
    return 0;
}

