// @siliconx
// 2017-08-01 11:55:14
#include <iostream>

int main() {
    using std::cout;
    using std::endl;
    using std::ios_base;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3;
    double mint = 10.0 / 3;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = " << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = " << million * mint << endl;
    return 0;
}

