#include <iostream>
#include <string>
using namespace std;

class Diamond{

    int staff_id;
    string staff_name;
    int staff_quantity; 
    int  year;
    int staff_raw_diamonds;
    int staff_export_diamonds;
    string staff_comp_ceo;

    public:
    
    int setter(int id,string name, int quantity, int  year, int diamonds, int export_diamonds, string comp_ceo)
    {
            this->staff_id=id;
            this->staff_name=name;
            this->staff_quantity=quantity;
            this->year=year;
            this->staff_raw_diamonds=diamonds;
            this->staff_export_diamonds=export_diamonds;
            this->staff_comp_ceo=comp_ceo;
    }

    int getter(){
        cout<<"- comp_id                  :"<<staff_id<<"\n";
        cout<<"- comp_name                :"<<staff_name<<"\n";
        cout<<"- comp_staff_quantity      :"<<staff_quantity<<"\n";
        cout<<"- comp_revenue             :"<<year<<"\n";
        cout<<"- comp_import_raw_diamonds :"<<staff_raw_diamonds<<"\n";
        cout<<"- comp_export_diamonds     :"<<staff_export_diamonds<<"\n";
        cout<<"- comp_ceo                 :"<<staff_comp_ceo<<"\n";
    }
};


int main(){

    Diamond staff1,staff2;

    staff1.setter(1,"arman",31,75000,2000,1800,"tushar""\n");
    staff1.getter();

    staff1.setter(2,"ayan",18,85000,1800,1600,"yuvraj""\n");
    staff1.getter();

    return 0;
}