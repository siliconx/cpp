#ifndef ARRAYTP_H_
#define ARRAYTP_H_

#include <iostream>
#include <cstdlib>

template <class T, int n>
class ArrayTP {
private:
    T ar[n];

public:
    ArrayTP() {}
    explicit ArrayTP(const T&);
    virtual T& operator[](int);
    virtual T operator[](int) const;
};

template<class T, int n>
ArrayTP<T, n>::ArrayTP(const T& v) {
    for (int i = 0; i < n; ++i) {
        ar[i] = v;
    }
}

template<class T, int n>
T& ArrayTP<T, n>::operator[](int i) {
    if (i < 0 || i >= n) {
        std::cerr << "error index\n";
        std::exit(EXIT_FAILURE);
    }

    return ar[i];
}

template<class T, int n>
T ArrayTP<T, n>::operator[](int i) const {
    if (i < 0 || i >= n) {
        std::cerr << "error index\n";
        std::exit(EXIT_FAILURE);
    }

    return ar[i];
}

#endif
