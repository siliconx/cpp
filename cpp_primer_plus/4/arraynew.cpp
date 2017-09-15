// @siliconx
// 2017-08-02 15:46:17
#include<iostream>

int main() {
    using std::cout;
    using std::endl;

    double* p = new double[3];
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    delete [] p;
    cout << "p[0] = " << *(p + 1) << endl;
    return 0;
}

