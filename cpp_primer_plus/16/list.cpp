#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void outint(int n) {std::cout << n << " ";}

int main() {
    using std::cout;
    using std::cin;
    using std::list;

    list<int> one(5, 2);  // list of 5 2s
    int stuff[5] = {1, 2, 4, 8, 6};
    list<int> two;

    two.insert(two.begin(), stuff, stuff + 5);

    int more[6] = {6, 4, 2, 4, 6, 5};

    list<int> three(two);
    three.insert(three.begin(), more, more + 6);

    cout << "List one: ";
    for_each(one.begin(), one.end(), outint);

    cout << "\nList two: ";
    for_each(two.begin(), two.end(), outint);

    cout << "\nList three: ";
    for_each(three.begin(), three.end(), outint);

    three.remove(2);
    cout << "\nList three minus 2s: ";
    for_each(three.begin(), three.end(), outint);
}
