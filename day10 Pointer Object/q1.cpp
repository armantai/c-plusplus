#include <iostream>
#include <string>
using namespace std;

int main(){

    int choice,choice1;
    int ID,Age,Salary,Bonus,Hours;
    string Name;


    do{

    cout<<"\n===== Employee Management System ===== \n";
    cout<<"1. Add Employee\n";
    cout<<"2. Display All Employees\n";
    cout<<"3. Delete Employee\n";
    cout<<"4. Exit\n";
    cout<<"Enter your choice:";
    cin>>choice;


    if (choice==1)
    {
        cout<<"1. Full-Time Employee\n";
        cout<<"2. Part-Time Employee\n";
        cout<<"Enter type:";
        cin>>choice1;

        if (choice1==1)
        {
            cout<<"Enter ID:";
            cin>>ID;
            cout<<"Enter Name:";
            cin>>Name;
            cout<<"Enter Age:";
            cin>>Age;
            cout<<"Enter Salary:";
            cin>>Salary;
            cout<<"Enter Bonus:";
            cin>>Bonus;
            cout<<"Full-Time Employee Added Successfully!\n";
        }else if (choice1==2)
        {
            cout<<"Enter ID:";
            cin>>ID;
            cout<<"Enter Name:";
            cin>>Name;
            cout<<"Enter Age:";
            cin>>Age;
            cout<<"Enter Salary:";
            cin>>Salary;
            cout<<"Enter Hours Worked:";
            cin>>Hours;
            cout<<"Part-Time Employee Added Successfully!\n";
        }
        else{
            cout<<"Invalid Your Number\n";
        }
        
        
    }
    else if (choice==2)
    {
        cout<<"No employees to display.\n";
    }
    else if (choice==3)
    {
        cout<<"No employees to delete.\n";
    }
    else if (choice==4)
    {
        cout<<"Exiting... Cleaning up memory...\n";
        cout<<"All memory freed successfully.";
    }
    else{
        cout<<"Invalid Your Number! Please Try Again.";
    }
    } while (choice != 4);
    
    

    return 0;
}