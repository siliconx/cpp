#ifndef BRASS_H_
#define BRASS_H_

#include <iostream>

class Brass {
private:
    std::string fullName;
    long acctNum;
    double balance;

public:
    Brass(const std::string& = "Nullbody", long = -1, double = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass() {};
};

class BrassPlus : public Brass {
private:
    double maxLoan;
    double rate;
    double owesBank;

public:
    BrassPlus(const std::string& = "Nullbody", long = -1,
        double = 0.0, double = 500, double = 0.11125);
    BrassPlus(const Brass&, double = 500, double = 0.11125);
    virtual void ViewAcct() const;
    virtual void  Withdraw(double);
    void ResetMax(double m) {maxLoan = m;}
    void ResetRate(double r) {rate = r;}
    void ResetOwes() {owesBank = 0;}
};

#endif
