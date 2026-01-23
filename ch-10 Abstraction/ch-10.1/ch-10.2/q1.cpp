


#include <iostream>

using namespace std;

class Shape
{

public:
    // pure virtual function
    virtual void calculate() = 0;
};

class Circle : public Shape
{

protected:
    float radius;

public:
    Circle(float r)
    {

        radius = r;
    }

    void calculate() override
    {

        cout << "\nArea of circle " << 3.14 * radius * radius << endl;
    }
};

class Triangle : public Shape
{

private:
    float height, width;

public:
    Triangle(float h, float w)
    {

        height = h;

        width = w;
    }

    void calculate() override
    {

        cout << "\nArea of Triangle " << 0.5 * height * width;
    }
};

class Rectangle : public Shape
{

private:
    float length, width;

public:
    Rectangle(float l, float w)
    {

        length = l;
        width = w;
    }

    void calculate() override
    {

        cout << "\nArea of rectangle " << length * width << endl;
    }
};

int main()
{

    Shape *shape;

    Circle c(5);
    shape = &c;
    shape->calculate();

    Triangle t(10, 20);
    shape = &t;
    shape->calculate();

    Rectangle r(30, 40);
    shape = &r;
    shape->calculate();

    return 0;
}