//create a rectangle class, set length and width via setdata(), return area from area()
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setData(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.setData(5.0, 3.0);
    cout << "Area of rectangle: " << rect.area() << endl;
    return 0;
}
