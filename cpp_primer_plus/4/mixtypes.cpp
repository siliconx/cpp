// @siliconx
// 2017-08-02 20:33:38
#include<iostream>

struct antarctica_years_end {
    int year;
};

int main() {
    antarctica_years_end s0, s1, s2;
    s0.year = 1998;
    antarctica_years_end* pa = &s2;
    pa->year = 1999;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    std::cout << trio[1].year << std::endl;
    
    antarctica_years_end** ppa = new antarctica_years_end* [3];
    for (int i=0; i < 3; ++i) {
        ppa[i] = new antarctica_years_end;
        ppa[i]->year  = i * 2000;
    }

    for (int i=0; i < 3; ++i) {
        std::cout << ppa[i]->year << " ";
    }
}

