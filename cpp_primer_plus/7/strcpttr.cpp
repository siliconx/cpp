#include <iostream>
#include <cmath>

const double RAD = 57.29577951;

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

void rect_to_polar(const rect*, polar*);
void show_polar(const polar*);

int main() {
    using namespace std;

    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y) {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done!\n";
    return 0;
}

void rect_to_polar(const rect* pxy, polar* p) {
    using namespace std;

    p->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    p->angle = atan2(pxy->y, pxy->x);
}

void show_polar(const polar* p) {
    std::cout << "distance = " << p->distance
    << ", angle = " << p->angle * RAD
    << " degrees\n";
}
