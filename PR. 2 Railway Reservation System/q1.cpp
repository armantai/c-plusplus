#include <iostream>
#include <string>
using namespace std;

class railway
{
    int choice, Number;
    string Name[100], Source, Destination;
    int Time;

public:
    void q1()
    {
        cout << "1. Add New Train Record \n";
        cout << "2. Display All Train Records \n";
        cout << "3. Search Train by Number \n";
        cout << "4. Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;

        cout<<"\n";

        switch (choice)
        {
        case 1:
            cout <<"Enter Train Number:";
            cin >> Number;
            cout <<"Enter Train Name  :";
            cin >> Name[100];
            cout <<"Enter Source      :";
            cin >> Source;
            cout <<"Enter Destination :";
            cin >> Destination;
            cout <<"Enter Train Time  :";
            cin >> Time;
            break;

        case 2:
            cout <<"Train 1 details:\n";
            cout <<"Enter Train Number:";
            cin >> Number;
            cout <<"Enter Train Name:";
            cin >> Name[100];
            cout <<"Enter Source:";
            cin >> Source;
            cout <<"Enter Destination:";
            cin >> Destination;
            cout <<"Enter Train Time:";
            cin >> Time;
            break;

        case 3:
            cout <<"Enter Train Number to search:";
            cin >> Number;
            cout <<"Train with number "<<Number<<" not found!:";
            break;

            case 4:
            cout <<"Exiting the system. Goodbye!";
            break;


        default:
            break;
        }
    }
};

int main()
{

    cout << "--- Railway Reservation System Menu ---" << "\n";

    railway r1;

    r1.q1();
    

    return 0;
}