#include <iostream>
#include <string> 
using namespace std;

class company{

    public:

    string company_name;
    int manager_salary;
    int employee_salary;
    int total_staff;
    string total_annual_revenue;
    string can_terminate;


    company(string cname,int msal,int esal,int staff,string tev, string termi);

    void myAccess(){
        cout << "\n[Admin Access]" << endl;
        cout << "Company Name         : " << company_name << endl;
        cout << "Manager Salary       : " << manager_salary << endl;
        cout << "Employee Salary      : " << employee_salary << endl;
        cout << "Total Staff          : " << total_staff << endl;
        cout << "Total Annual Revenue : " << total_annual_revenue << endl;
        cout << "Can Terminate?       : " << can_terminate << endl;
    }



};


int main(){

    company company;




    return 0;
}