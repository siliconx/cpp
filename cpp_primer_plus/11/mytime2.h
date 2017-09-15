// @siliconx
// 2017-08-17 17:39:50
#ifndef MYTIME2_H_
#define MYTIME2_H_

class Time {
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int, int = 0);
    ~Time();

    Time operator+(const Time&) const;
    Time operator-(const Time&) const;
    Time operator*(double) const;

    void addMin(int);
    void addHour(int);
    void reset(int = 0, int = 0);
    void show() const;
};

#endif
