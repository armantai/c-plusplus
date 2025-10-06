#include <iostream>
#include <stdio.h>
using namespace std;

class calculation{

    int first,secound,third,four,sum;

    public:

    void one(){
        cout<<"Enter any First number: ";
        cin>>first;
    }
    void two(){
        cout<<"Enter any Secound number: ";
        cin>>secound;
    }
    void three(){
        cout<<"Enter any Third number: ";
        cin>>third;
    }
    void fourr(){
        cout<<"Enter any Four number: ";
        cin>>four;
    }

    void calculationsum(){
        sum=first+secound+third+four;
        cout<<"Your value is : "<<sum<<"\n";
    }
    

     

};


int main(){

    calculation c1;
    c1.one();
    c1.two();
    c1.three();
    c1.fourr();
    c1.calculationsum();


    return 0;
}