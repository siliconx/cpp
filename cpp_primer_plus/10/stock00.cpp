#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string& co, long n, double pr) {
    company = co;

    if (n < 0) {
        std::cout << "Number of shares can't be negative;" << company << " shares set to 0.";
        shares = 0;
    } else {
        shares = n;
    }

    share_val = pr;
    set_total();
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "Number of shares purchased can't be negative. "
        << "Transaction is aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_total();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0) {
        cout << "Number of shares sold can't be negative. "
        << "Transaction is aborted.\n";
    } else if (num > shares) {
        cout << "You can't sell more than you have! "
        << "Transaction is aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_total();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_total();
}

void Stock::show() {
    std::cout << "Company: " << company
        << "\nShares: " << shares
        << "\nShare Price: $" << share_val
        << "\nTotal Worth: $" << total_val
        << std::endl << std::endl;
}
