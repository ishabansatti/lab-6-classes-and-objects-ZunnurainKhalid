#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    int pin;

public:
    BankAccount(string acc, double bal, int p) {
        accountNumber = acc;
        balance = bal;
        pin = p;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount, int enteredPin) {
        if(enteredPin == pin && balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful" << endl;
        } else {
            cout << "Transaction failed" << endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount b("12345", 1000, 1111);

    b.deposit(500);
    cout << "Balance: " << b.getBalance() << endl;

    b.withdraw(300, 1111);
    cout << "Balance: " << b.getBalance() << endl;

    b.withdraw(1500, 1111);
    b.withdraw(100, 1234);

    return 0;
}