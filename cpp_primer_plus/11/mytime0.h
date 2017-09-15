// @siliconx
// 2017-08-17 17:39:50
#ifndef MYTIME0_H_
#define MYTIME0_H_

class Time {
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int, int = 0);
    ~Time();

    void addMin(int);
    void addHour(int);
    void reset(int = 0, int = 0);
    Time sum(const Time&) const;
    void show() const;
};

#endif
