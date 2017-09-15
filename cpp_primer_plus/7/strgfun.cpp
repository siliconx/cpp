// @siliconx
// 2017-08-08 17:56:51
#include <iostream>

unsigned int c_in_str(const char*, char c);

int main() {
    using namespace std;

    char mmm[15] = "minimum";

    const char *wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " m character in " << mmm << endl;
    cout << us << " u character in " << wail << endl;
    return 0;
}

unsigned int c_in_str(const char* str, char c) {
    unsigned int count = 0;

    while (*str) {
        if (*str == c) {
            ++count;
        }
        ++str;
    }
    return count;
}
