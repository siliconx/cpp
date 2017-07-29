// @siliconx
// 2017-07-10 09:10:15
#include <iostream>
#include <stack>
#define N 9

using namespace std;

int main(void) {
    stack<int> intStack;
    for (size_t i = 0; i < N; ++i) {
        intStack.push(i);
    }

    while (!intStack.empty()) {
        cout << intStack.top() << endl;
        intStack.pop();
    }
    return 0;
}

