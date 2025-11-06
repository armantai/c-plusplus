#include <iostream>
#include <string>
using namespace std;

class cube{
    public:
    int a,b,c;
};

class cube1 : public cube{

    public:

    void setdata(int x, int y, int z){
        a=x;
        b=y;    
        c=z;
    }

    void getdata(){
        int sum=(a*a*a)+(b*b*b)+(c*c*c);
        cout<<a<<", "<<b<<" and "<<c<<" is: "<<sum<<endl;
    }
    
};

int main(){

    cube1 c1;

    int x,y,z;

    cout<<"Enter Three number:\n";
    cin>>x>>y>>z;

    c1.setdata(x,y,z);
    c1.getdata();



    return 0;
}