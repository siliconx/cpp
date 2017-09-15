#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons>*);
void show(array<double, Seasons>);

int main() {
    array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(array<double, Seasons>* p) {
    for (int i = 0; i < Seasons; ++i) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*p)[i];
    }
}

void show(array<double, Seasons> d) {
    double sum = 0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i) {
        cout << Snames[i] << ": $" << d[i] << endl;
        sum += d[i];
    }
    cout << "Total expenses: $" << sum << endl;
}
