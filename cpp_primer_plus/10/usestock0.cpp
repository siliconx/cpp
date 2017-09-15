#include <iostream>
#include "stock00.h"

int main() {
    Stock f;
    f.acquire("NanoSmart", 20, 12.5);
    f.show();
    f.buy(15, 18.125);
    f.show();
    f.sell(400, 20.0);
    f.show();
    f.buy(30000, 40.125);
    f.show();
    f.sell(500, 30.0);
    f.show();
}