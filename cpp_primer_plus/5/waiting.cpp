// @siliconx
// 2017-08-03 11:59:33
#include<iostream>
#include<ctime>

int main() {
    using namespace std;
    cout << "Enter the delay time, in seconds: " ;
    float secs;
    cin >> secs;
    clock_t delay = secs *  CLOCKS_PER_SEC;
    cout << "starting\a\n";
    clock_t start = clock();
    int i = 0;
    while (clock() - start < delay);
    cout << "times: " << i;
    cout << "done!\n";
    return 0;
}

