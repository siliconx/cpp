// @siliconx
// 2017-07-12 09:18:39
#include <iostream>

using namespace std;

class Shape {
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
    protected:
        int width;
        int height;
};

class Rectangle: public Shape {
    public:
        double getArea() {
            return width * height;
        }
};

int main() {
    Rectangle re;
    re.setWidth(2);
    re.setHeight(3);
    cout << re.getArea() << endl;
    return 0;
}
