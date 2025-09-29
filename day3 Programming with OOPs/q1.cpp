#include <iostream>
#include <string>
using namespace std;

class student{
    
    int student_id;
    string student_name;
    int student_age;
    string student_course;
    string student_city;
    string student_email;
    string student_collage;



    public:

    
    int setter(int id,string name,int age, string course,string city, string email,string collage)
    {
        student_id= id;
        student_name= name;
        student_age= age;
        student_course= course;
        student_city= city;
        student_email= email;
        student_collage= collage;
        this->student_id=id;
        this->student_name=name;
        this->student_age=age;
        this->student_course=course;
        this->student_city=city;
        this->student_email=email;
        this->student_collage=collage;
    }  


    int getter()
    {
        cout<<"student id      :"<<student_id<<"\n";
        cout<<"student name    :"<<student_name<<"\n";
        cout<<"student age     :"<<student_age<<"\n";
        cout<<"student course  :"<<student_course<<"\n";
        cout<<"student city    :"<<student_city<<"\n";
        cout<<"student email   :"<<student_email<<"\n";
        cout<<"student collage :"<<student_collage<<"\n";
    }
};


int main(){

    student s1,s2;

    s1.setter(1,"arman",18,"Full Stack Development","Ahmedabad","armantai722@gmail.com","dcm collage");
    s1.getter();
    cout<<"\n";


    s2.setter(2,"ayan",18,"Full Stack Development","ahmedabad","taiayan18@gmail.com","dcm collage");
    s2.getter();
    cout<<"\n";



    return 0;
}