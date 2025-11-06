#include <iostream>
#include <string>
using namespace std;

class number{
    int value;

    public:
    number(int n=0){
        value=n;
    }
    void display(){
        cout<<value;
    }

    bool operator<(number n) {
        return value < n.value;
    }


    int getValue() {
        return value;
    }



};

int main(){
    int a,b;

    cout<<"Enter Any First Number: ";
    cin>>a;
    cout<<"Enter Any Secound Number: ";
    cin>>b;


    number obj1(a), obj2(b);

    if (obj1 < obj2)
        cout << "\nSecond object has higher value: " << obj2.getValue() << endl;
    else if (obj2 < obj1)
        cout << "\nFirst object has higher value: " << obj1.getValue() << endl;
    else
        cout << "\nBoth objects have equal value." << endl;






    return 0;
}