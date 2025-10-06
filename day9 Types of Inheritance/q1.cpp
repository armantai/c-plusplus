#include <iostream>
#include <string>
using namespace std;

class bank{

    public:

     bank(){
        cout<<"- Class RBI ->";
        

    }

    // void interset(){
        

    //     // cout<<"Class SBI rate of interest: "<<interset<<"\n";
    // }

    
};

class SBI{
public:

    SBI(){
        int SBI;
        SBI=8;

        cout<<" Class SBI rate of interest: "<<SBI<<"%"<<"\n";
    }
};

class BOB{
public:

    BOB(){
        int BOB;
        BOB=7;

        cout<<" Class BOB rate of interest: "<<BOB<<"%"<<"\n";
    }
};

class ICICI{
public:

    ICICI(){
        int ICICI;
        ICICI=6;

        cout<<" Class ICICI rate of interest: "<<ICICI<<"%"<<"\n";
    }
};


int main(){

    bank b1;
    SBI s1;
    bank b2;
    BOB c1;
    bank b3;
    ICICI i1;

    



    return 0;
}