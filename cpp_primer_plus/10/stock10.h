#ifndef STOCK10_H_
#define STOCK10_H_

#include <string>

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_total() {
        total_val = shares * share_val;
    }
public:
    Stock();
    Stock(const std::string&, long = 0, double = 0.0);
    ~Stock();

    void buy(long, double);
    void sell(long, double);
    void update(double);
    void show() const;
};

#endif
