// @siliconx
// 2017-07-29 11:36:39
#include <iostream>
#include <cmath>


int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    double area;

    cout << "Enter the floor area, in square feet, of you home: ";
    cin >> area;

    double side;
    side = sqrt(area);

    cout << "That's the equivalent of a square " << side
        << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}

