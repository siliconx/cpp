#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> MapCode;

int main() {
    using namespace std;
    MapCode codes;

    codes.insert(Pair(415, "San Francisco"));
    codes.insert(Pair(510, "Oakland"));
    codes.insert(Pair(718, "Brooklyn"));
    codes.insert(Pair(415, "San rafael"));

    cout << "Number of cities with area code 415: ";
    cout << codes.count(415) << endl;

    cout << "Area code    City\n";
    MapCode::iterator it;
    for (it = codes.begin(); it != codes.end(); ++it) {
        cout << "    " << (*it).first << "    " << (*it).second << endl;
    }
}