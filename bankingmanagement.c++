#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance) {
        this->accountNumber = accNum;
        this->balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful.Current balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.Current balance: " << balance << endl;
        } 
        else {
            cout << "Insufficient balance.Cannot withdraw." << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    string accNum;
    double initialBalance = 0;
    cout << "Enter account number: ";
    getline(cin, accNum);

    BankAccount account(accNum, initialBalance);

    int choice;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Balance\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;
        }
        case 2: {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        }
        case 3:
            account.display();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
