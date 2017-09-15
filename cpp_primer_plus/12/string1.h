#ifndef SRING1_H_
#define SRING1_H_

#include <iostream>

using std::ostream;
using std::istream;

class String {
private:
    char* str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;

public:
    String();
    String(const char*);
    String(const String&);

    ~String();

    int length() const {
        return len;
    }

    // overloaded operator metods
    String& operator=(const String&);
    String& operator=(const char*);
    char& operator[](int);
    const char& operator[](int) const;

    // overload operator friends
    friend bool operator<(const String&, const String&);
    friend bool operator>(const String&, const String&);
    friend bool operator==(const String&, const String&);
    friend ostream& operator<<(ostream&, const String&);
    friend istream& operator>>(istream&, String&);

    // static functions
    static int howMany();
};

#endif
