#include <iostream>
#include "namesp.h"

namespace pers {
    using std::cout;
    using std::cin;

    void getPerson(Person& p) {
        cout << "Enter first name: ";
        cin >> p.fname;
        cout << "Enter last name: ";
        cin >> p.lname;
    }

    void showPerson(const Person& p) {
        std::cout << p.lname << ", " << p.fname << std::endl;
    }
}

namespace debts {
    void getDebt(Debt& rd) {
        getPerson(rd.name);
        std::cout << "Enter debt: ";
        std::cin >> rd.amount;
    }

    void showDebt(const Debt& rd) {
        showPerson(rd.name);
        std::cout << ": $" << rd.amount << std::endl;
    }

    double sumDebts(const Debt ar[], int n) {
        double sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += ar[i].amount;
        }
        return sum;
    }
}
