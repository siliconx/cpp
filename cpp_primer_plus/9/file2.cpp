#include <iostream>
#include <cmath>
#include "coordin.h"

polar rect_to_polar(rect xypost) {
    using namespace std;
    polar ans;

    ans.distance = sqrt(xypost.x * xypost.x + xypost.y * xypost.y);
    ans.angle = atan2(xypost.y, xypost.x);
    return ans;
}

void show_polar(polar dapos) {
    using namespace std;

    const double Rad = 57.29577951;
    cout << "distance = " << dapos.distance
    << ", angle = " << dapos.angle * Rad << endl;
}
