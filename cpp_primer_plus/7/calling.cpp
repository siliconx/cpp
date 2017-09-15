// @siliconx
// 2017-08-04 14:58:34
#include <iostream>

void simple();

int main() {
    using namespace std;

    cout << "main() whill call the simple() function:\n";
    simple();
    cout << "main() is finished with the simple() function.\n";
    return 0;
}

// function definition
void simple() {
    using namespace std;
    cout << "I'm but a simple function.\n";
}
