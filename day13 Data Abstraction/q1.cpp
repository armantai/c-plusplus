#include <iostream>
#include <string>
using namespace std;

// Base class: Admin
class Admin
{
private:
    // Private: Fully abstracted (cannot be inherited or accessed directly)
    double total_annual_revenue;

protected:
    // Protected: Inheritable, accessible in derived classes
    double manager_salary;
    double employee_salary;
    int total_staff;
    bool can_terminate;

public:
    // Public: Accessible to all
    string company_name;

    // Constructor to initialize members
    Admin(string cname, double msal, double esal, int staff, double revenue, bool terminate)
        : company_name(cname), manager_salary(msal), employee_salary(esal),
          total_staff(staff), total_annual_revenue(revenue), can_terminate(terminate) {}

    // Virtual function to override in child classes
    virtual void myAccess()
    {
        cout << "\n[Admin Access]" << endl;
        cout << "Company Name         : " << company_name << endl;
        cout << "Manager Salary       : " << manager_salary << endl;
        cout << "Employee Salary      : " << employee_salary << endl;
        cout << "Total Staff          : " << total_staff << endl;
        cout << "Total Annual Revenue : " << total_annual_revenue << endl;
        cout << "Can Terminate?       : " << (can_terminate ? "Yes" : "No") << endl;
    }
};

// Derived class: Manager (inherits from Admin)
class Manager : public Admin
{
public:
    // Constructor passes values to Admin constructor
    Manager(string cname, double msal, double esal, int staff, double revenue, bool terminate)
        : Admin(cname, msal, esal, staff, revenue, terminate) {}

    // Override myAccess()
    void myAccess() override
    {
        cout << "\n[Manager Access]" << endl;
        cout << "Company Name   : " << company_name << endl;
        cout << "Manager Salary : " << manager_salary << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        cout << "Total Staff    : " << total_staff << endl;
        // total_annual_revenue is private → cannot access
        // can_terminate is protected → can access
        cout << "Can Terminate? : " << (can_terminate ? "Yes" : "No") << endl;
    }
};

// Derived class: Employee (inherits from Manager)
class Employee : public Manager
{
public:
    // Constructor passes values to Manager constructor
    Employee(string cname, double msal, double esal, int staff, double revenue, bool terminate)
        : Manager(cname, msal, esal, staff, revenue, terminate) {}

    // Override myAccess()
    void myAccess() override
    {
        cout << "\n[Employee Access]" << endl;
        cout << "Company Name   : " << company_name << endl;
        cout << "Employee Salary: " << employee_salary << endl;
        // Manager salary and termination rights are protected but logically hidden from Employee
        // total_annual_revenue is private → not accessible
        cout << "Total Staff    : " << total_staff << endl;
    }
};

// Main function
int main()
{
    Admin admin("TechCorp Pvt Ltd", 80000, 40000, 50, 15000000, true);
    Manager mgr("TechCorp Pvt Ltd", 80000, 40000, 50, 15000000, true);
    Employee emp("TechCorp Pvt Ltd", 80000, 40000, 50, 15000000, true);

    admin.myAccess();
    mgr.myAccess();
    emp.myAccess();

    return 0;
}
