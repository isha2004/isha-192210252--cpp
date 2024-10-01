#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
        cout << "Account created: " << accountNumber << endl;
    }

    ~BankAccount() {
        cout << "Account closed: " << accountNumber << endl;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else
