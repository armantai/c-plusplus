#include <iostream>

using namespace std;

int main(){

    int size;


    cout<<"Enter Your array's size :";
    cin>>size;

    cout<<"\n";

    int arr[size];

    cout<<"Enter arrays elements :\n";
    for (int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];

    }
    
    cout<<"Even elements of an Array:\n";

      for (int i=0; i<size; i++)
      {
        if (arr[i]%2 ==0)
        {
          
           cout<<arr[i]<<", ";
        }
        
      }
      

    return 0;
}