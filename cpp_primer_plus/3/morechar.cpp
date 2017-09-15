// @siliconx
// 2017-07-31 17:12:14
#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add 1 to the char code:" << endl;
    ch++;
    i = ch;

    cout << "The ASCII code for " << ch << " is " << i << endl;

    // using the cout.put() member function to display a char
    cout << "Displaying char ch using cout.put(ch):\n";
    cout.put(ch);
    cout.put('!');
    cout << endl << "Done!" << endl;

    char alarm = '\a';
    cout << alarm << "Don't do that again\a\n";
    cout << "Ben \"Buggsie\" Hacker was here!\n";
    return 0;
}

