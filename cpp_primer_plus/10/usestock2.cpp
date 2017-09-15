#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main() {
    // {
    //     using std::cout;
    //     cout << "Using constructor to create new objects\n";
    //     Stock stock1("NanoSmart", 12, 21.9);
    //     stock1.show();

    //     Stock stock2 = Stock("Boff objects", 2, 2.0);
    //     stock2.show();

    //     cout << "Assigned stock1 and stock2:\n";
    //     stock2 = stock1;
    //     cout << "Listing stock1 and stock2:\n";
    //     stock1.show();
    //     stock2.show();

    //     cout << "Using a constructor to reset an object\n";
    //     stock1 = Stock("Nifty Foods", 10, 50.0);
    //     stock1.show();

    //     const Stock land = Stock("Kludgehorn Properties");
    //     land.show();
    //     cout << "Done!\n";
    // }

    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 60, 6.5)
    };

    std::cout << "Stock holdings:\n";
    int st;
    for (st = 0; st < STKS; ++st) {
        stocks[st].show();
    }

    const Stock* top = &stocks[0];
    for (st = 1; st < STKS; ++st) {
        top = &(top->topval(stocks[st]));
    }

    std::cout << "\nMost valuable holding:\n";
    top->show();

    std::cout << "Exit\n";
    return 0;
}