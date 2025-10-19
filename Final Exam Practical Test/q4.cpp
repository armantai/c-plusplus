#include <iostream>
using namespace std;

class shape
{
protected:
    string color;
    float area;

public:
    void saetcolor(string c)
    {
        color = c;
    }
    void saetarea(float a)
    {
        area = a;
    }
    string getcolor()
    {
        return color;
    }

    float getarea()
    {
        return area;
    }

    virtual void calculate() = 0;
    virtual void displaydetails() = 0;
};

class circel : public shape
{
private:
    float radius;

public:
    void setradius(float r)
    {
        radius = r;
    }

    void calculate()
    {
        float pi = 3.14;
        float a = pi * radius * radius;
        saetarea(a);
    }
    void displaydetails()
    {
        cout << "\nShape: Circle";
        cout << "\nColor: " << color;
        cout << "\nRadius: " << radius;
        cout << "\nArea: " << area;
        cout << "\n------------------------";
    }
};

class rectangle : public shape
{
private:
    float l, w;

public:
    void setdata(float x, float y)
    {
        l = x;
        w = y;
    }

    void calculate()
    {
        float a = l * w;
        saetarea(a);
    }

    void displaydetails()
    {
        cout << "\nShape: Rectangle";
        cout << "\nColor: " << color;
        cout << "\nLength: " << l << ", Width: " << w;
        cout << "\nArea: " << area;
        cout << "\n------------------------";
    }
};

int main()
{

    shape *shapes[2];

    circel c1;
    c1.saetcolor("Red");
    c1.setradius(5);
    c1.calculate();
    shapes[0] = &c1;

    rectangle r1;
    r1.saetcolor("Blue");
    r1.setdata(4, 6);
    r1.calculate();
    shapes[1] = &r1;


    for (int i = 0; i < 2; i++)
    {
        shapes[i]->displaydetails();
    }


    return 0;
}