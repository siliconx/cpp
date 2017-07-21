// @siliconx
// 2017-06-22 11:03:42
#include <iostream>
#include <string>
#include <cassert>

using std::string;

inline const string &shorter_str(const string&, const string&);

int main() {
    std::cout << __func__ << " in " << __LINE__ << ": "<< shorter_str("ab", "cdf") << std::endl;
    assert(0);
}

inline const string &shorter_str(const string &a, const string &b) {
    return a.size() <= b.size() ? a : b;
}
