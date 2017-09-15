// @siliconx
// 2017-08-13 14:56:59

#include <iostream>
#include "coordin.h"

using namespace std;

int main() {
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two number (q to quit): ";
    }
    cout << "Bye!\n";
    return 0;
}
