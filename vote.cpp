#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        int Wait = 18 - age;
        cout << "You are not eligible to vote." << endl;
        cout << "You need to wait " << Wait << " more year to be eligible" << endl;
    }
    return 0;
}

