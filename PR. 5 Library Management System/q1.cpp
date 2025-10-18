#include <iostream>
#include <string>
using namespace std;

class book
{
public:
    string Title, Author, Date, Director, Editor, Check, title;
    int minutes, Number;
    long long digit;

    void addbook()
    {
        cout << endl
             << "Enter Title: ";
        cin >> Title;
        cout << "Enter Author: ";
        cin >> Author;
        cout << "Enter Due Date: ";
        cin >> Date;
        while (true)
        {
            cout << "Enter 13-digit ISBN: ";
            cin >> digit;
            if (digit >= 1000000000000LL && digit <= 9999999999999LL)
            {
                break;
            }
            else
            {
                cout << "Invalid ISBN! ISBN must be 13 digits." << endl;
            }
        }
        cout << "Book added successfully!" << endl;
    }

    void display1()
    {
        cout << endl
             << "[Book Details]";
        cout << endl
             << "Enter Title: " << Title << endl;
        cout << "Enter Author: " << Author << endl;
        cout << "Enter Due Date: " << Date << endl;
        cout << "Enter 13-digit ISBN: " << digit << endl;
    }

    void adddvd()
    {
        cout << endl
             << "Enter Title: ";
        cin >> Title;
        cout << "Enter Director: ";
        cin >> Director;
        cout << "Enter Due Date: ";
        cin >> Date;
        cout << "Enter Duration (minutes): ";
        cin >> minutes;
        cout << "DVD added successfully!" << endl;
    }

    void display2()
    {
        cout << endl
             << "[DVD Details]" << endl;
        cout << "Enter Title: " << Title << endl;
        cout << "Enter Director: " << Director << endl;
        cout << "Enter Due Date: " << Date << endl;
        cout << "Enter Duration (minutes): " << minutes << endl;
    }

    void addmagazine()
    {
        cout << endl
             << "Enter Title: ";
        cin >> Title;
        cout << "Enter Editor:  ";
        cin >> Editor;
        cout << "Enter Due Date: ";
        cin >> Date;
        cout << "Enter Issue Number: ";
        cin >> Number;
        cout << "Magazine added successfully!" << endl;
    }
    void display3()
    {
        cout << endl
             << "[Magazine Details]" << endl;
        cout << "Enter Title: " << Title << endl;
        cout << "Enter Editor: " << Editor << endl;
        cout << "Enter Due Date: " << Date << endl;
        cout << "Enter Issue Number: " << Number << endl;
    }

    bool checkout()
    {
        string Title;
        cout << "Enter Title to Check Out: ";
        cin >> Title;

        if (Title == title)
        {
            cout << "Item " << title << " checked out successfully!" << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    int choice;
    book b1, b2, b3, b4, b5;
    bool addbook = false, adddvd = false, addmagazine = false,found = false;
    

    do
    {

        cout << endl
             << "===== LIBRARY MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Add DVD" << endl;
        cout << "3. Add Magazine" << endl;
        cout << "4. Display All Items" << endl;
        cout << "5. Check Out Item" << endl;
        cout << "6. Return Item" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b1.addbook();
            addbook = true;
            break;

        case 2:
            b2.adddvd();
            adddvd = true;
            break;

        case 3:
            b3.addmagazine();
            addmagazine = true;
            break;

        case 4:
            cout << "\n===== DISPLAY ITEMS =====\n";
            if (addbook)
                b1.display1();
            if (adddvd)
                b2.display2();
            if (addmagazine)
                b3.display3();
            if (!addbook && !adddvd && !addmagazine)
                cout << "No items to display!\n";
            break;

        case 5:
            
            if (addbook && b1.checkout())
                found = true;
            else if (adddvd && b2.checkout())
                found = true;
            else if (addmagazine && b3.checkout())
                found = true;
            if (!found)
                cout << "Item not found!" << endl;

            break;

            case 7:
            cout<<"Exiting program. Releasing memory...";
            break;

        default:
            cout<<"Invalid choice! Please try again."<<endl;
            break;
        }

    } while (choice != 7);

    return 0;
}