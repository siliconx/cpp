#include <iostream>

struct travel_time {
    int hours;
    int mins;
};

const int MINS = 60;

travel_time sum(travel_time, travel_time);
void show(travel_time);

int main() {
    using namespace std;

    travel_time day1 = {5, 45};
    travel_time day2 = {4, 55};

    travel_time trip = sum(day2, day1);
    cout << "Two-day total: ";
    show(trip);

    travel_time day3 = {4, 32};
    cout << "Three-day total: ";
    show(sum(trip, day3));

    return 0;
}


travel_time sum(travel_time a, travel_time b) {
    travel_time total;
    total.hours = a.hours + b.hours;
    total.mins = a.mins + b.mins;

    return total;
}

void show(travel_time t) {
    std::cout << t.hours << " hours, "
    << t.mins << " minutes\n";
}
