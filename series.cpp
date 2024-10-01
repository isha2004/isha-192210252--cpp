#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    double sum = 0.0;
    it n;
    cout << "enter the limit" << endl;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        sum += (factorial(i)) / i;
    }
    cout << "The sum of the series is: " << sum << endl;
    return 0;
}

