#include <iostream>

char* buildstr(char, int);

int main() {
    using namespace std;

    int times;
    char ch;

    cout << "Enter a char: ";
    cin >> ch;
    cout << "Enter a int: ";
    cin >> times;

    char* ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;

    ps = buildstr('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;
    return 0;
}

char* buildstr(char c, int n) {
    char* ps = new char[n + 1];
    ps[n] = '\0';

    for (int i = 0; i < n; ++i) {
        ps[i] = c;
    }

    return ps;
}