// @siliconx
// 2017-07-31 15:36:38
#include <iostream>
#include <climits>

#define ZERO 0

int main() {
    using std::cout;
    using std::endl;

    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue
         << " dollars deposited." << endl
         << "Add $1 to each account." << endl;
    sam++;
    sue++;
    cout << "Now Sam has " << sam << " dollars and Sue has " << sue
         << " dollars deposited.\nPoor Sam!\n";

    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue
         << " dollars deposited.";
    cout << "Take $1 from each accout." << endl << "Now ";
    sam--;
    sue--;
    cout << "Sam has " << sam << " dollars and Sue has " << sue
         << " dollars deposited." << endl << "Lucky Sue!" << endl;

    return 0;
}
