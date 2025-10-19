#include <iostream>
using namespace std;

class shape
{
private:
    string color;
    float area;

public:
    void setcolor(string c)
    {
        color = c;
    }

    void setarea(float a)
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

    void show()
    {
        cout << "color : " << color << endl;
        cout << "area  : " << area << endl;
    }
};

class circle : public shape
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
        float pi=3.14;
        float a =pi* radius * radius;
        setarea(a);
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
        setarea(a);
    }
};

int main()
{


    circle c1;
    c1.setcolor("Red");
    c1.setradius(5);
    c1.calculate();
    cout << "--- Circle Details ---" << endl;
    c1.show();


    rectangle r1;
    r1.setcolor("Blue");
    r1.setdata(4, 6);
    r1.calculate();
    cout << "\n--- Rectangle Details ---" << endl;
    r1.show();

    
    return 0;
}
