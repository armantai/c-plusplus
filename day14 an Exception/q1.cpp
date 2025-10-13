#include <iostream>
#include <string>
using namespace std;

class dividenumber
{
};
class agelimit
{
};
class password1
{
};

int main()
{

    try
    {

        // divide number
        int num1, num2;

        cout << "Enter First number: ";
        cin >> num1;

        cout << "Enter Secound number: ";
        cin >> num2;

        if (num2 == 0)
            throw dividenumber();
        cout << "Result of Division: " << num1 / num2 << "\n";

        // age details

        int age;

        cout << "\nEnter your age: ";
        cin >> age;

        if (age < 18)
            throw agelimit();
        cout << "You are eligible to vote\n";

        // password details

        string password;
        cout <<"\nEnter your password: ";
        cin >> password;

        bool hasUpper = false;
        for (char ch : password)
        {
            if (isupper(ch))
            {
                hasUpper = true;
                break;
            }
        }

        if (!hasUpper)
        throw password1();
        cout<<"Password is valid!\n";
        
    }

    catch (dividenumber)
    {
        cout <<"\nError: A Number Cannot Be Divided By Zero!\n";
    }
    catch (agelimit)
    {
        cout <<"\nError: Age must be 18 or older to vote!\n";
    }
    catch(password1){
        cout<<"\nError: Password must contain at least one uppercase letter!\n";
    }

    cout<<"\nProgram finished successfully.";
    return 0;
}