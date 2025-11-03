#include <iostream>
#include <string>
using namespace std;

class BankAccount
{

private:
    int accountNumber, balance;
    string ownerName;

public:
    void accountadd()
    {
        cout << endl
             << "Enter Account Number:";
        cin >> accountNumber;
        cout << "Enter Holder Name:";
        cin >> ownerName;
        cout << "Enter Initial Balance:";
        cin >> balance;
        cout << "Account Created Successfully." << endl;
    }

    void accountdeposit()
    {
        int balnanceadd;

        cout << "Enter amount to deposit:";
        cin >> balnanceadd;

         balance+= balnanceadd;
        cout << "Amount Deposited Successfully." << endl;
    }

    void accountwidthdrow()
    {
        int balnancewidthdrow;

        cout << "Enter amount to deposit:";
        cin >> balnancewidthdrow;

        balance -= balnancewidthdrow;
        cout << "Amount Withdrawn Successfully." << endl;
    }

    void info()
    {
        cout <<endl<< "[Bank Account Details]"<<endl;
        cout << "Account Number     : " << accountNumber << endl;
        cout << "Account Holder     : " << ownerName<< endl;
        cout << "Current Balance    : " << balance << endl;
        
    }

public:
};

int main()
{

    int choice;
    BankAccount ca;

    do
    {
        cout << "\n=== Bank Account Management System ===\n";
        cout << "1. Create  Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. display the balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            ca.accountadd();
            break;

        case 2:
            ca.accountdeposit();
            break;

        case 3:
            ca.accountwidthdrow();
            break;

        case 4:
            ca.info();
            break;

        default:
            break;
        }
    } while (choice != 5);

    return 0;
}