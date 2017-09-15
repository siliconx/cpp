#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stacktp1.h"

using std::cout;
using std::cin;
using std::endl;

const int Num = 10;

int main() {
    std::srand(std::time(0));
    cout << "Please enter stack size: ";
    int size;
    cin >> size;

    Stack<const char*> st(size);

    const char* in[Num] = {
        "1: Hank Gilgamesh", "2: Kiki Ishtar",
        "3: Betty Rocker", "4: Ian Flagranti",
        "5: Wolfgang Kibble", "6: Portia Koop",
        "7: Joy Almodo", "8: Xaverie Paprika",
        "9: Juan Moore", "10: Misah Mache"
    };

    const char* out[Num];

    int processed = 0;
    int nextin = 0;
    while (processed < Num) {
        if (st.isempty()) {
            st.push(in[nextin++]);
        } else if (st.isfull()) {
            st.pop(out[processed++]);
        } else if (std::rand() % 2 && nextin < Num) {
            st.push(in[nextin++]);
        } else {
            st.pop(out[processed++]);
        }
    }

    for (int i = 0; i < Num; ++i) {
        cout << out[i] << endl;
    }

    cout << "Bye!\n";
    return 0;
}
