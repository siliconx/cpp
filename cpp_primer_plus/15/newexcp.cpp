#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big {
    double stuff[20000];
};

int main() {
    Big* pb;

    try {
        cout << "Trying to get a big block of memory:\n";
        pb = new Big[10000];
        cout << "Got past the new request:\n";
    } catch (bad_alloc& ba) {
        cout << "catched\n:";
        cout << ba.what() << endl;
    }

    return 0;
}
