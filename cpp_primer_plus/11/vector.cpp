#include <cmath>
#include "vect.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR {
    const double RAD = 45.0 / atan(1.0);  // 57.29577951...

    void Vector::set_mag() {
        mag = sqrt(x * x + y * y);
    }

    void Vector::set_ang() {
        if (x == 0.0 && y == 0.0) {
            ang = 0.0;
        } else {
            ang = atan2(y, x);
        }
    }

    void Vector::set_x() {
        x = mag * cos(ang);
    }

    void Vector::set_y() {
        y = mag * sin(ang);
    }

    // public methods
    Vector::Vector() {
        x = y = mag = ang = 0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode from) {
        mode = from;

        if (from == RECT) {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        } else if (from == POL) {
            mag = n1;
            ang = n2 / RAD;
            set_x();
            set_y();
        } else {
            cout << "Incorrect 3rd argument to Vector() -- "
                << "vector set to 0\n";
            x = y = mag = ang = 0.0;
            mode = RECT;
        }
    }

    void Vector::reset(double n1, double n2, Mode from) {
        mode = from;

        if (mode == RECT) {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        } else if (from == POL) {
            mag = n1;
            ang = n2 / RAD;
            set_x();
            set_y();
        } else {
            cout << "Incorrect 3rd argument to Vector() -- "
                << "vector set to 0\n";
                x = y = mag = ang = 0.0;
                mode = RECT;
        }
    }

    Vector::~Vector() {}

    void Vector::polar_mode() {
        mode = POL;
    }

    void Vector::rect_mode() {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector& b) const {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector& b) const {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator-() const {
        return Vector(-x, -y);
    }

    // maultiply vector by n
    Vector Vector::operator*(double n) const {
        return Vector(n * x, n * y);
    }

    // friend methods
    // maultiply n by Vector a
    Vector operator*(double n, const Vector& a) {
        return a * n;
    }

    std::ostream& operator<<(std::ostream& os, const Vector& v) {
        if (v.mode == Vector::RECT) {
            os << "(x, y) = (" << v.x << ", " << v.y << ")";
        } else if (v.mode == Vector::POL) {
            os << "(m, a) = (" << v.mag << ", " << v.ang * RAD << ")";
        } else {
            os << "Vector object mode is invalid";
        }
        return os;
    }
}
