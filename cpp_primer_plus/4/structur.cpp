// @siliconx
// 2017-08-02 10:28:47
#include<iostream>
#include<string>

enum spectrum {
    RED,
    BLUE,
    GREEN,
    YELLOW
};

struct inflatable {
    std::string name;
    float volume;
    double price;
    int is;
};

int main() {
    using std::cout;

    struct inflatable test = {
        "Glorious Gloria",
        1.88,
        29.99,
        9
    };

    inflatable guest = test;

    cout << "Expand your guest list with " << guest.name
        << " and price = " << guest.price
        << " is = " << guest.is << std::endl;

    spectrum band = YELLOW;
    cout << "band = " << band << std::endl;
    cout << &test << " -- " << &guest;
    return 0;
}

