#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

class Grand {
private:
    int hold;

public:
    Grand(int h = 0) : hold(h) {}
    virtual void Speak() const {cout << "I'm a grand class!\n";}
    virtual int Value() const {return hold;}
};

class Superb : public Grand {
public:
    Superb(int h = 0) : Grand(h) {}
    void Speak() const {cout << "I am a superb class!!\n";}
    virtual void Say() const {
        cout << "I hold the superb value of " << Value() << "\n";
    }
};

class Magnificent : public Superb {
private:
    char ch;

public:
    Magnificent(int h = 0, char c = 'A') : Superb(h), ch(c) {}
    void Speak() const {cout << "I'm a magnificent class!!!\n";}
    void Say() const {
        cout << "I hold the char " << ch << " and the int "
            << Value() << endl;
    };
};

Grand* GetOne();

int main() {
    std::srand(std::time(0));
    Grand* pg;
    Superb* ps;

    for (int i = 0; i < 5; ++i) {
        pg = GetOne();
        pg->Speak();
        if (ps = dynamic_cast<Superb*> (pg)) {
            ps->Say();
        } else {
            cout << "dynamic_cast failed\n";
        }
    }

    return 0;
}

Grand* GetOne() {
    Grand* p;
    switch (std::rand() % 3) {
        case 0: {
            p = new Grand(std::rand() % 100);
            break;
        }

        case 1: {
            p = new Superb(std::rand() % 100);
            break;
        }

        case 2: {
            p = new Magnificent(std::rand() % 100, 'A' + std::rand() % 26);
            break;
        }
    }
    return p;
}