#include <iostream>

using namespace std;

int main(){

    int size,a,b;

    cout<<"Enter the first number :";
    cin>>a;

    cout<<"Enter the secound number :";
    cin>>b;

    cout<<"The arrays is : ";

    for (int i=a;  i<=b; i++)
    {
        if (i%4 ==0)
        {
            cout<<" "<<i;
        }
        
    }
    


    return 0;
}