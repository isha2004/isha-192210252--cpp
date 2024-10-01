#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Rectangle created: " << length << " x " << width << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed: " << length << " x " << width << endl;
    }

    double area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Area: " << area() << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.display();
    return 0;
}

