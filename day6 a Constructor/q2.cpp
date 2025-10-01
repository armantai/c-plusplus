#include <iostream>
#include <string>
using namespace std;

class cafe{
    
    string  cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

    public:

    int setter(string name, string type, string rating, string location, int year, int quantity)
    {
        this-> cafe_name=name;
        this-> cafe_type=type;
        this-> cafe_rating=rating;
        this-> cafe_location=location;
        this-> cafe_establish_year=year;
        this-> cafe_staff_quantity=quantity;
    }

    int getter()
    {
        cout<<"- cafe_name           :"<<cafe_name<<"\n";
        cout<<"- cafe_type           :"<<cafe_type<<"\n";
        cout<<"- cafe_rating         :"<<cafe_rating<<"\n";
        cout<<"- cafe_location       :"<<cafe_location<<"\n";
        cout<<"- cafe_establish_year :"<<cafe_establish_year<<"\n";
        cout<<"- cafe_staff_quantity :"<<cafe_staff_quantity<<"\n";
    }

};

int main(){

    cafe c1,c2;

    c1.setter("Black & White","Rooftop","5 Star","Ahmedabad",2015,18);
    c1.getter();

    cout<<"\n";

    c2.setter("Royal","Normal","4 Star","Surat",1999,30);
    c2.getter();

    return 0;
}