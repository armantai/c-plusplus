
#include <iostream>
#include <string>
using namespace std;

class trainrecourd
{
    int Number, Number1;
    char Name[100], Source[100], Destination[100], Time[20];

public:
    void add()
    {
        cout << "Enter Train Number:";
        cin >> Number;
        cout << "Enter Train Name  :";
        cin >> Name;
        cout << "Enter Source      :";
        cin >> Source;
        cout << "Enter Destination :";
        cin >> Destination;
        cout << "Enter Train Time  :";
        cin >> Time;
        cout << "Added To Succesfully.\n";
    }

    void display()
    {
        cout << "\nTrain Details:\n";
        cout << "Train Number:" << Number << "\n";
        cout << "Train Name  :" << Name << "\n";
        cout << "Source      :" << Source << "\n";
        cout << "Destination :" << Destination << "\n";
        cout << "Train Time  :" << Time << "\n";
    }
    void trainfound()
    {
        cout << "Enter Train Number to search:";
            cin>>Number1;
            if (Number1 == Number)
            {
                cout << "Train with number "<< Number1 <<" Available!\n";
            }
            else
            {
                cout << "Train with number " << Number1 << " not found!\n";
            }
    }
};

int main()
{

    int choice1,Number1;
    do
    {
        int choice;
        trainrecourd t1;
        cout << "\n--- Railway Reservation System Menu ---" << "\n";
        cout << "1. Add New Train Record \n";
        cout << "2. Display All Train Records \n";
        cout << "3. Search Train by Number \n";
        cout << "4. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            t1.add();
            break;

        case 2:
            t1.display();
            break;

        case 3:
            t1.trainfound();
            break;


            case 4:
            cout <<"Exiting the system. Goodbye!\n";
            break;

        default:
        cout <<"Not AVailable Please Try Again!\n";
            break;
        }
    } while (choice1 != 4);

    return 0;
}