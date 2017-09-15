// @siliconx
// 2017-08-03 20:17:26
#include<iostream>

const int Max = 5;

int main() {
    using namespace std;

    double golf[Max];
    cout << "Please enter your golf scores.\n";
    cout << "You may enter " << Max << " rounds.\n";
    int i = 0;
    for (i = 0; i < Max; ++i) {
        cout << "round #" << i + 1 << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Enter a number, Please!\n";
        }
    }

    double total = 0;
    for (int j = 0; j < i; ++j) {
        total += golf[j];
    }

    cout << total / Max << " = average score " << Max << " rounds\n";
    cout << "Done.\n";
    return 0;
}

