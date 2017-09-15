#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace VECTOR {
    class Vector {
    public:
        enum Mode {RECT, POL};

    private:
        double x;
        double y;
        double mag;  // length of vector
        double ang;  // direction of vector in degree
        Mode mode;

        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

    public:
        Vector();
        Vector(double, double, Mode = RECT);
        void reset(double, double, Mode = RECT);
        ~Vector();
        double xval() const {return x;}
        double yval() const {return y;}
        double magval() const {return mag;}
        double angval() const {return ang;}
        void polar_mode();
        void rect_mode();

        Vector operator+(const Vector&) const;
        Vector operator-(const Vector&) const;
        Vector operator-() const;
        Vector operator*(double) const;

        friend Vector operator*(double, const Vector&);
        friend std::ostream& operator<<(std::ostream&, const Vector&);
    };
}

#endif
