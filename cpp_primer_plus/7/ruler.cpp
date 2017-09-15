// @siliconx
// 2017-08-09 10:04:36
#include <iostream>

const int LEN = 66;
const int DIV = 6;

void subdivide(char[], int, int, int);

int main() {
    char ruler[LEN];
    int i;
    for (i = 0; i < LEN - 2; ++i) {
        ruler[i] = ' ';
    }
    ruler[LEN - 1] = '\0';
    int max = LEN - 2;
    int min = 0;

    ruler[min] = ruler[max] = '|';
    std::cout << ruler << std::endl;
    for (i = 1; i <= DIV; ++i) {
        subdivide(ruler, min, max, i);
        std::cout << ruler << std::endl;
        for (int j = i; j < LEN - 2; ++j) {
            ruler[j] = ' ';
        }
    }
    return 0;
}

void subdivide(char ar[], int low, int high, int level) {
    if (level == 0) {
        return;
    }

    int mid = (low + high) / 2;
    ar[mid] = '|';
    subdivide(ar, low, mid, level - 1);
    subdivide(ar, mid, high, level - 1);
}
