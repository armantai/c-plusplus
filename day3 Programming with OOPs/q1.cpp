// #include <iostream>
// #include <string>
// using namespace std;

// class student{
    
//     int student_id;
//     string student_name;
//     int student_age;
//     string student_course;
//     string student_city;
//     string student_email;
//     string student_collage;



//     public:

    
//     int setter(int id,string name,int age, string course,string city, string email,string collage)
//     {
//         student_id= id;
//         student_name= name;
//         student_age= age;
//         student_course= course;
//         student_city= city;
//         student_email= email;
//         student_collage= collage;
//         this->student_id=id;
//         this->student_name=name;
//         this->student_age=age;
//         this->student_course=course;
//         this->student_city=city;
//         this->student_email=email;
//         this->student_collage=collage;
//     }  


//     int getter()
//     {
//         cout<<"student id      :"<<student_id<<"\n";
//         cout<<"student name    :"<<student_name<<"\n";
//         cout<<"student age     :"<<student_age<<"\n";
//         cout<<"student course  :"<<student_course<<"\n";
//         cout<<"student city    :"<<student_city<<"\n";
//         cout<<"student email   :"<<student_email<<"\n";
//         cout<<"student collage :"<<student_collage<<"\n";
//     }
// };


// int main(){

//     student s1,s2;

//     s1.setter(1,"arman",18,"Full Stack Development","Ahmedabad","armantai722@gmail.com","dcm collage""\n");
//     s1.getter();

//     s2.setter(2,"ayan",18,"Full Stack Development","ahmedabad","taiayan18@gmail.com","dcm collage""\n");
//     s2.getter();

//     return 0;
// }






#include <iostream>
#include <string>
using namespace std;

class student{

    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_collage;


    public:

    int setter(int id,string name, int age, string course,string city, string email, string collage){


        this->stu_id=id;
        this->stu_name=name;
        this->stu_age=age;
        this->stu_course=course;
        this->stu_city=city;
        this->stu_email=email;
        this->stu_collage=collage;

    }

    int getter(){
        cout<<"\n";
        cout<<"- stu_id      :"<<stu_id<<"\n";
        cout<<"- stu_name    :"<<stu_name<<"\n";
        cout<<"- stu_age     :"<<stu_age<<"\n";
        cout<<"- stu_course  :"<<stu_course<<"\n";
        cout<<"- stu_city    :"<<stu_city<<"\n";
        cout<<"- stu_email   :"<<stu_email<<"\n";
        cout<<"- stu_collage :"<<stu_collage<<"\n";
    }



};



int main(){


    student s1,s2;

    s1.setter(1,"arman",18,"Full Stack Development","Ahmedabad","taiarman722@gmail.com","DCM collage""\n");
    s1.getter();
    s2.setter(2,"Ayan",18,"Full Stack Development","Ahmedabad","taiayan18@gmail.com","DCM collage""\n");
    s2.getter();


    return 0;
}