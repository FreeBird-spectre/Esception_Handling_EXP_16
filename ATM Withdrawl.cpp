//Abir Seth
//PRN-24070123003
//ENTC A1
#include <iostream>
using namespace std;

class ATM {
    float balance;

public:
    ATM(float startBalance) {
        balance = startBalance;
    }

    void showBalance() {
        cout << "Your current balance is: ₹" << balance << endl;
    }

    void depositMoney(float amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount!" << endl;
            return;
        }
        balance += amount;
        cout << "₹" << amount << " deposited successfully." << endl;
        showBalance();
    }

    void withdrawMoney(float amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
            return;
        }
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
            return;
        }
        balance -= amount;
        cout << "₹" << amount << " withdrawn successfully." << endl;
        showBalance();
    }
};

int main() {
    ATM myATM(5000000); 
    int choice;
    float amount;

    cout << "=== Welcome to Simple ATM ===" << endl;

    do {
        cout << "\nChoose an option:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                myATM.showBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: ₹";
                cin >> amount;
                myATM.depositMoney(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ₹";
                cin >> amount;
                myATM.withdrawMoney(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}

=== Welcome to Simple ATM ===

Choose an option:
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 2
Enter amount to deposit: ₹670000
₹670000 deposited successfully.
Your current balance is: ₹5.67e+06

Choose an option:
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 3
Enter amount to withdraw: ₹50000
₹50000 withdrawn successfully.
Your current balance is: ₹5.62e+06
