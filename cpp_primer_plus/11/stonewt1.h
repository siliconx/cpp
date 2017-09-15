#ifndef STONEWT1_H_
#define STONEWT1_H_

class Stonewt {
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;

public:
    Stonewt();
    Stonewt(double);
    Stonewt(int, double);

    ~Stonewt();

    void show_lbs() const;
    void show_stn() const;

    // conversion functions
    operator int() const;
    operator double() const;
};

#endif
