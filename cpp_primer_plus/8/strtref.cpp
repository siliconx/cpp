#include <iostream>
#include <string>

struct free_throws {
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws&);
void set_pc(free_throws&);
free_throws& accumulate(free_throws&, const free_throws&);

int main() {
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    set_pc(one);
    set_pc(two);
    set_pc(three);

    display(one);
    display(two);
    display(three);
    return 0;
}

void display(const free_throws& ft) {
    std::cout << "Name: " << ft.name
        << ", Made: " << ft.made
        << ", Attempts: " << ft.attempts
        << ", Percent: " << ft.percent << std::endl;
}

void set_pc(free_throws& ft) {
    if (ft.attempts != 0) {
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    } else {
        ft.percent = 0;
    }
}
