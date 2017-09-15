#include <iostream>
#include "Worker0.h"

using std::cout;
using std::cin;
using std::endl;

// Worker methods

// must implement virtual destructor, even if pure
Worker::~Worker() {}

void Worker::Set() {
    cout << "Enter worker's name: ";
    getline(cin, fullname);
    cout << "Enter worker's ID: ";
    cin >> id;

    while (cin.get() != '\n') {
        continue;
    }
}

void Worker::Show() const {
    cout << "Name: " << fullname << endl
        << "Employee ID: " << id << endl;
}

// Waiter methods

void Waiter::Set() {
    Worker::Set();
    cout << "Enter waiter's panache rating: ";
    cin >> panache;

    while (cin.get() != '\n') {
        continue;
    }
}

void Waiter::Show() const {
    cout << "Category: waiter\n";
    Worker::Show();
    cout << "Panache rating: " << panache << endl;
}

// Singer methods

const char* Singer::pv[] = {
    "other", "alto", "contralto", "soprano",
    "bass", "baritone", "tenor"
};

void Singer::Set() {
    Worker::Set();
    cout << "Enter number ofr singer's vocal range:\n";
    int i;
    for (i = 0; i < Vtype; ++i) {
        cout << i << ": " << pv[i] << "    ";
        if (i % 4 == 3) {
            cout << endl;
        }
    }

    if (i % 4 != 0) {
        cout << endl;
    }

    while (cin.get() != '\n') {
        continue;
    }
}

void Singer::Show() const {
    cout << "Category: singer\n";
    Worker::Show();
    cout << "vocal range: " << pv[voice] << endl;
}
