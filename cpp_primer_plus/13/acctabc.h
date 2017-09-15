#ifndef ACCTABC_H_
#define ACCTABC_H_

#include <iostream>
#include <string>

// abstract base class
class AcctABC {
private:
    std::string fullName;
    long acctNum;
    double balance;

protected:
    struct Formatting {
        std::ios_base::fmtflags  flag;
        std::streamsize pr;
    };

    const std::string& FullName() const {
        return fullName;
    }
    long AcctNum() const {return acctNum;}
    Formatting SetFormat() const;
    void Restore(Formatting& f) const;

public:
    AcctABC(const std::string& = "NullBody", long = -1, double = 0.0);
    void Deposit(double);
    virtual void Withdraw(double) = 0;
    double Balance() const {return balance;}
    virtual void ViewAcct() const = 0;
    virtual ~AcctABC();

};

class Brass : public AcctABC {
public:
    Brass(const std::string& = "Nullbody", long = -1, double = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass() {};
};

class BrassPlus : public AcctABC {
private:
    double maxLoan;
    double rate;
    double owesBank;

public:
    BrassPlus(const std::string& = "Nullbody", long = -1,
        double = 0.0, double = 500, double = 0.10);
    BrassPlus(const Brass&, double = 500, double = 0.11125);
    virtual void ViewAcct() const;
    virtual void  Withdraw(double);
    void ResetMax(double m) {maxLoan = m;}
    void ResetRate(double r) {rate = r;}
    void ResetOwes() {owesBank = 0;}
};

#endif
