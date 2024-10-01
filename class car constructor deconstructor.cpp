#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car(string m, int y) {
        model = m;
        year = y;
        cout << "Car created: " << model << " (" << year << ")" << endl;
    }

    ~Car() {
        cout << "Car destroyed: " << model << " (" << year << ")" << endl;
    }

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car("Toyota", 2020);
    car.display();
    return 0;
}

