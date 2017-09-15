// @siliconx
// 2017-08-02 20:57:26
#include<iostream>
#include<vector>
#include<array>

int main() {
    using namespace std;
    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    vector<double> a2(4);  // create vector with 4 elements
    
    for (int i=0;i < 4; ++i) {
        a2[i] = i / 3;
    }

    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4 = a3;

    cout << "a1[2] = " << a1[2] << endl;
    cout << "&a3 = " << &a3 << endl;
    cout << "&a4 = " << &a4 << endl;
}
