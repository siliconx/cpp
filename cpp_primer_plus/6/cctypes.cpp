// @siliconx
// 2017-08-03 19:58:55
#include<iostream>
#include<cctype>

int main() {
    using namespace std;
    
    cout << "Enter text for analysis, ant type @ to terminate input.\n";
    char c;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(c);
    while (c != '@') {
        if (isalpha(c)) {
            ++chars;
        } else if (isspace(c)) {
            ++whitespace;
        } else if (isdigit(c)) {
            ++digits;
        } else if (ispunct(c)) {
            ++punct;
        } else {
            ++others;
        }
        cin.get(c);
    }

    cout << "You input:\n";
    cout << chars << " letters, " << whitespace << " withspace, " <<
        digits  << " digitis, " << punct << " punctuations, " <<
        others << " others.\n";
    return 0;
}

