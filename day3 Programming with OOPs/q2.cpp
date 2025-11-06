#include <iostream>
#include <string>
using namespace std;


class customer{

    int id;
    string name;
    int age;
    string city;
    int number;
    int year;
    string brand_name;


    public:

    int setter(int id, string name, int age,string city,int number,int year,string brand_name)
    {
        this->id=id;
        this->name=name;
        this->age=age;
        this->city=city;
        this->number=number;
        this->year=year;
        this->brand_name=brand_name;
    }


    int getter()
    {
        cout<<"customer-id              :"<<id<<"\n";
        cout<<"customer-name            :"<<name<<"\n";
        cout<<"customer-age             :"<<age<<"\n";
        cout<<"customer-city            :"<<city<<"\n";
        cout<<"customer-number          :"<<number<<"\n";
        cout<<"customer-Simcard-Validity:"<<year<<"\n";
        cout<<"customer-brand_name      :"<<brand_name<<"\n";
    }

};


int main(){


    customer cus1,cus2,cus3,cus4,cus5;

    cus1.setter(101,"Arman",18,"ahmedabad",840198533,2015,"jio" "\n");
    cus1.getter();

    cus2.setter(102,"ayan",18,"ahmedabad",738302929,2016,"airtel" "\n");
    cus2.getter();

    cus2.setter(103,"jainam",21,"ahmedabad",1826587621,2016,"jio" "\n");
    cus2.getter();

    cus2.setter(104,"yuvraj",21,"ahmedabad",458961589,2016,"airtel" "\n");
    cus2.getter();

    cus2.setter(105,"ovais",20,"ahmedabad",451658952,2016,"jio" "\n");
    cus2.getter();




    return 0;
}