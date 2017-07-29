// @siliconx
// 2017-06-22 11:36:51
#include <iostream>

int add(int, int);
int call(int (*pf)(int, int), int, int);


int main() {
    int (*pf)(int a, int b) = add;
    decltype(add) *pf2 = add;
    std::cout << (*pf)(1, 2) << std::endl;
    std::cout << (*pf2)(1, 2) << std::endl;
    std::cout << (*call)(&add, 3, 2) << std::endl;

}

int add(int a, int b) {
    return a + b;
}

int call(int (*pf)(int, int), int a, int b) {
    return (*pf)(a, b);
}

