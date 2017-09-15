#include <iostream>
#include <string>

int main() {
    using namespace std;

    string one("Lottery Winner!");;
    cout << one << endl;

    string two(20, '$');
    cout << two << endl;

    string three(one);
    cout << three << endl;

    one += " Oooops";
    cout << one << endl;
    two = "Sorry that was ";
    three[0] = 'P';

    string four;
    cout << four << endl;
    four = two + three;
    cout << four << endl;

    char alls[] = "All's well that ends well";
    string five(alls, 20);
    cout << five << endl;

    string six(alls + 6, alls + 10);
    cout << six << endl;

    string seven(&five[6], &five[10]);
    cout << seven << endl;

    string eight(four, 7, 16);
    cout << eight << endl;

    return 0;

}