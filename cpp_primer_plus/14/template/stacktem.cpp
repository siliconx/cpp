#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    Stack<std::string> st;
    char c;
    std::string po;
    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";

    while (cin >> c && std::toupper(c) != 'Q') {
        while (cin.get() != '\n') {
            continue;
        }

        if (!std::isalpha(c)) {
            cout << '\a';
            cout << "input error!!!\n";
            continue;
        }

        switch(c) {
            case 'a':
            case 'A': {
                cout << "Enter a PO number to add: ";
                cin >> po;
                if (st.isfull()) {
                    cout << "stack already full\n";
                } else {
                    st.push(po);
                    cout <<"<<" << po << ">>" << " added\n"
                        << "current size: " << st.size() << endl;
                }
                break;
            }

            case 'p':
            case 'P': {
                if (st.isempty()) {
                    cout << "stack already empty\n";
                } else {
                    st.pop(po);
                    cout << "PO #" << po << " popped\n";
                    break;
                }
            }
        }

    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    }

    cout << "Bye!\n";
    return 0;
}