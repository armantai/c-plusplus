#include <iostream>
using namespace std;

class Shape
{
protected:
    string color;
    float area;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }

    float getArea()
    {
        return area;
    }

    virtual void calculateArea() = 0;
    virtual void displayDetails() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    void setData(string c, float r)
    {
        setColor(c);
        radius = r;
    }

    void calculateArea()
    {
        area = 3.14 * radius * radius; 
    }

    void displayDetails()
    {
        cout << "\nShape: Circle";
        cout << "\nColor: " << color;
        cout << "\nRadius: " << radius;
        cout << "\nArea: " << area;
        cout << "\n------------------------";
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    void setData(string c, float l, float w)
    {
        setColor(c);
        length = l;
        width = w;
    }

    void calculateArea()
    {
        area = length * width;
    }

    void displayDetails()
    {
        cout << "\nShape: Rectangle";
        cout << "\nColor: " << color;
        cout << "\nLength: " << length << ", Width: " << width;
        cout << "\nArea: " << area;
        cout << "\n------------------------";
    }
};

int main()
{
    
    Shape *shapes[2];

   
    Circle c1;
    c1.setData("Red", 5);
    shapes[0] = &c1;

    
    Rectangle r1;
    r1.setData("Blue", 4, 6);
    shapes[1] = &r1;

    
    for (int i = 0; i < 2; i++)
    {
        shapes[i]->calculateArea();
        shapes[i]->displayDetails();
    }

    return 0;
}

