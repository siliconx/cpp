#include <iostream>
#include "stonewt1.h"

int main() {
    using std::cout;
    Stonewt p(9, 2.8);
    double p_wt = p;

    cout << "Convert to double => ";
    cout << "p: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "p: " << int(p) << " pounds.\n";
    return 0;
}
