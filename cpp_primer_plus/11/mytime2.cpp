#include <iostream>
#include "mytime2.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

Time::~Time() {
}

Time Time::operator+(const Time& t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time& t) const {
    Time diff;
    int total1, total2;

    total1 = t.minutes + 60 * t.hours;
    total2 = minutes + 60 * hours;
    diff.minutes = (total2 - total1) % 60;
    diff.hours = (total2 - total1) / 60;
    return diff;
}

Time Time::operator*(double mult) const {
    Time result;
    long totalminutes = hours * mult * 60 + minutes * mult;
    result.minutes = totalminutes % 60;
    result.hours = totalminutes / 60;
    return result;
}

void Time::addMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::addHour(int h) {
    hours += h;
}

void Time::reset(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::show() const {
    std::cout << hours << " hours, "
    << minutes << " minutes\n";
}
