#include <iostream>
using namespace std;

class Compare {
    int value;

public:
    // Constructor
    Compare(int v = 0) {
        value = v;
    }

    // Function to display the value
    void display() {
        cout << value;
    }

    // Overload < operator
    int operator<(Compare c) {
        return value < c.value;
    }

    // Getter
    int getValue() {
        return value;
    }
};

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    Compare obj1(a), obj2(b);

    if (obj1 < obj2)
        cout << "\nSecond object has higher value: " << obj2.getValue() << endl;
    else if (obj2 < obj1)
        cout << "\nFirst object has higher value: " << obj1.getValue() << endl;
    else
        cout << "\nBoth objects have equal value." << endl;

    return 0;
}
