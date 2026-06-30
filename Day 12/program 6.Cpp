//use this pointer in setLength() to resolve naming conflict,then display length//
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double l) {
        this->length = l;  // Using this pointer to distinguish between member and parameter
    }

    void setWidth(double w) {
        this->width = w;  // Using this pointer to distinguish between member and parameter
    }

    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }
};

int main() {
    Rectangle rect;
    rect.setLength(5.0);
    rect.setWidth(3.0);
    cout << "Length of rectangle: " << rect.getLength() << endl;
    cout << "Width of rectangle: " << rect.getWidth() << endl;
    return 0;
}
