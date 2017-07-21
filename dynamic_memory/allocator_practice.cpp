// @siliconx
// 2017-07-19 17:48:21
#include <iostream>
#include <memory>

using namespace std;

int main() {
    allocator<int> alloc;
    int n = 9;
    auto const p = alloc.allocate(n);
    auto q = p;
    alloc.construct(q++);
    alloc.construct(q++, 10, 'c');
    return 0;
}

