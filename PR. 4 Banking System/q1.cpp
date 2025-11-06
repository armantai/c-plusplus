#include <iostream>
#include <string>
using namespace std;

class bankdetails
{
public:
    int number, balance, month, rate, limit;
    string name;
    void saving()
    {
        cout << "\nEnter Account Number:";
        cin >> number;
        cout << "Enter Holder Name:";
        cin >> name;
        cout << "Enter Initial Balance:";
        cin >> balance;
        cout << "Enter Interest Rate (%):";
        cin >> rate;
        cout << "Savings Account Created Successfully.\n";
    }

    void Checking()
    {

        cout << "\nEnter Account Number:";
        cin >> number;
        cout << "Enter Holder Name:";
        cin >> name;
        cout << "Enter Initial Balance:";
        cin >> balance;
        cout << "Enter Overdraft Limit:";
        cin >> limit;
        cout << "Checking Account Created Successfully.\n";
    }

    void fixed()
    {

        cout << "\nEnter Account Number:";
        cin >> number;
        cout << "Enter Holder Name:";
        cin >> name;
        cout << "Enter Initial Balance:";
        cin >> balance;
        cout << "Enter Term (in months):";
        cin >> month;
        cout << "Enter Interest Rate (%):";
        cin >> rate;
        cout << "Fixed Deposit Account Created Successfully.\n";
    }

    void deposit()
    {
        int amount;

        cout << "Enter amount to deposit:";
        cin >> amount;

        balance += amount;
        cout << "Amount Deposited Successfully." << endl;
    }

    void withdrow()
    {
        int amount;

        cout << "Enter amount to deposit:";
        cin >> amount;

        balance -= amount;
        cout << "Amount Withdrawn Successfully." << endl;
    }

    void info()
    {
        cout << "[Savings Account]";
        cout << "Account Number     : " << number << endl;
        cout << "Account Holder     : " << name << endl;
        cout << "Current Balance    : " << balance << endl;
        cout << "Interest Rate      : " << rate << endl;
    }

    void intersetsaving()
    {
        double interset = rate * (balance / 100);
        cout << "Saving Account Interest: " << interset;
    }

    void intersetfixed()
    {
        double interset = balance * rate * month / (month * 100);
        cout << "Saving Account Interest: " << interset;
    }
};

int main()
{
    bankdetails b1;
    int choice;

    do
    {

        cout << "\n=== Bank Account Management System ===\n";
        cout << "1. Create Savings Account\n";
        cout << "2. Create Checking Account\n";
        cout << "3. Create Fixed Deposit Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Display Account Info\n";
        cout << "7. Calculate Interest\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b1.saving();
            break;

        case 2:
            b1.Checking();
            break;

        case 3:
            b1.fixed();
            break;

        case 4:
            b1.deposit();
            break;

        case 5:
            b1.withdrow();
            break;

        case 6:
            b1.info();
            break;

        case 7:
        
            break;

        case 8:
            cout << "Exiting Program. Thank you!";
            break;

        default:
            cout << "Invalid Your Number! Please Try Again..";
            break;
        }

    } while (choice != 8);

    return 0;
}