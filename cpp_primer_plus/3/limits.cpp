// @siliconx
// 2017-07-31 15:26:17
#include <iostream>
#include <climits>

using std::cout;
using std::endl;

int main() {
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof (int) << " bytes.\n";
    cout << "short is " << sizeof (short) << " bytes.\n";
    cout << "long is " << sizeof (long) << " bytes.\n";
    cout << "long long is " << sizeof (long long) << " bytes.\n";

    cout << endl;
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}
