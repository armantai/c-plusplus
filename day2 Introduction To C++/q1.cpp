// #include <iostream>
// using namespace std;

// class details{

//   int personal;

//   public:
  
//   void start(){

//     cout<<"-emp_id ";
//     cin>>personal;
    
//   }
  
// };

// int main(){

//   details personal;

//   personal.start();

//   return 0;
// }








#include <iostream>
using namespace std;

class details{

  int personal,name;

  public:

  void id(){

    cout<<"- emp_id ";
    cin>>personal;
    cout<<"- emp_name ";
    cin>>name; 
  }

};

int main(){

  details personal;
  personal.id();

  
  return 0;
}