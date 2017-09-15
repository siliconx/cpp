// @siliconx
// 2017-08-02 10:28:47
#include<iostream>
#include<string>

struct inflatable {
    std::string name;
    float volume;
    double price;
    int is;
};

int main() {
    using std::cout;
    using std::endl;

    struct inflatable test = {
        "Glorious Gloria",
        1.88,
        29.99,
        9
    };
    inflatable* ps = new inflatable;
    ps->name = test.name;
    ps->volume = test.volume;
    ps->price = test.price;

    inflatable guest = test;

    cout << "Expand your guest list with " << guest.name
        << " and price = " << guest.price
        << " is = " << guest.is << std::endl;

    cout << "ps->name = " << ps->name << ", "
        << "(*ps).price = " << (*ps).price << endl;

    cout << &test << " -- " << &guest;
    delete ps;
    return 0;
}

