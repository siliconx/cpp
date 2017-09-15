#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void display(const string[], int);

int main() {
    string l[SIZE];
    cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << i + 1 << ": ";
        getline(cin, l[i]);
    }

    cout << "Your list:\n";
    display(l, SIZE);
    return 0;
}

void display(const string l[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << ": " << l[i] << endl;
    }
}
