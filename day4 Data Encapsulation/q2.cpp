#include <iostream>
#include <string> 
using namespace std;

class Customer{

    int id;
    string name;
    int age;
    string city;
    int number;
    int year;
    string brand;


    public:;

    int setter(int id, string name, int age,string city,int number, int year, string brand){
        this->id=id;
        this->name=name;
        this->age=age;
        this->city=city;
        this->number=number;
        this->year=year;
        this->brand=brand;
    }
    int getter(){
        cout<<"- cust_id      : "<<id<<"\n";
        cout<<"- cust_name    : "<<name<<"\n";
        cout<<"- cust_age     : "<<age<<"\n";
        cout<<"- cust_city    : "<<city<<"\n";
        cout<<"- cust_number  : "<<number<<"\n";
        cout<<"- cust_year    : "<<year<<"\n";
        cout<<"- cust_brand   : "<<brand<<"\n";
    }
};


int main(){

    Customer s1,s2;

    s1.setter(1,"arman",18,"Ahmedabad",840191853,10,"jio""\n");
    s1.getter();
    s2.setter(2,"ayan",18,"Ahmedabad",738302092,11,"airtel""\n");
    s2.getter();



    return 0;
}