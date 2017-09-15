#include <iostream>
#include "brass.h"

int main() {
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot Piggy", 23423, 1222.3);
    BrassPlus Hoggy("oratio Hoggy", 34255, 3000.0);
    Piggy.ViewAcct();
    cout << endl;

    Hoggy.ViewAcct();
    cout << endl;

    cout << "Depositing $1000 intothe Hoggy account:\n";
    Hoggy.Deposit(1000.0);
    cout << "New balance: $" << Hoggy.Balance() << endl;
    cout << "Withdrawing $4200 from the Piggy account:\n";
    Piggy.Withdraw(4200.00);
    cout << "Piggy account balance: $" << Piggy.Balance() << endl;

    cout << "Withdrawing $42000 from the Hoggy account:\n";
    Hoggy.Withdraw(42000);
    Hoggy.ViewAcct();
    return 0;
}