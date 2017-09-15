// @siliconx
// 2017-08-17 17:39:50
#ifndef MYTIME3_H_
#define MYTIME3_H_

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
    friend Time operator*(double m, const Time& t){
        return t * m;
    }
    friend std::ostream& operator<<(std::ostream&, const Time&);

    void addMin(int);
    void addHour(int);
    void reset(int = 0, int = 0);
    void show() const;
};

#endif
