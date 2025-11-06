#include <iostream>
#include <string> 
using namespace std;

class student{

    int id;
    string name;
    int age;
    string course;
    string city;
    string email;
    string college;


    public:;

    int setter(int id, string name, int age, string course, string city, string email, string college){
        this->id=id;
        this->name=name;
        this->age=age;
        this->course=course;
        this->city=city;
        this->email=email;
        this->college=college;
    }
    int getter(){
        cout<<"- stu_id      : "<<id<<"\n";
        cout<<"- stu_name    : "<<name<<"\n";
        cout<<"- stu_age     : "<<age<<"\n";
        cout<<"- stu_course  : "<<course<<"\n";
        cout<<"- stu_city    : "<<city<<"\n";
        cout<<"- stu_email   : "<<email<<"\n";
        cout<<"- stu_college : "<<college<<"\n";
    }
};


int main(){

    student s1,s2;

    s1.setter(1,"arman",18,"Full Stack Development","Ahmedabad","taiarman742@gmail.com","DCm College""\n");
    s1.getter();
    s2.setter(2,"ayan",18,"Full Stack Development","Ahmedabad","taiayan18@gmail.com","DCm College""\n");
    s2.getter();



    return 0;
}