#include <iostream>
#include <string>
using namespace std;

class laptop
{
private:
    string name, processor;
    float price;

public:
     laptop(string n, float p, string pr)
    {
        name = n;
        price = p;
        processor = pr;
    }

    void display()
    {
        cout << "------------------";
        cout <<endl<< "Laptop Name: " << name<<endl;
        cout << "Price      : " << price<<endl;
        cout << "Processor  : " << processor<<endl;
    }
};

int main()
{

    laptop laptop1("Dell XPS 15",1299.99,"Intel i7");
    laptop laptop2("MacBook Pro",2399.99,"Apple M2");
    laptop laptop3("HP Spectre x360",1199.5,"Intel i5");

    laptop1.display();
    laptop2.display();
    laptop3.display();

    return 0;
}