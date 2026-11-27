#include <iostream>
#include <cmath>
using namespace std;

class Point
{
public:
    float x, y;
    void print()
    {
        cout << "(" << x << ", " << y << ")";
    }
};

class Triangle
{
public:
    Point p1, p2, p3;

    double d1, d2, d3;

    Triangle(Point p1, Point p2, Point p3)
    {
        this->p1 = p1;
        this->p2 = p2;
        this->p3 = p3;

        d1 = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
        d2 = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
        d3 = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));
    }

    void print()
    {
        p1.print();
        cout << " ";
        p2.print();
        cout << " ";
        p3.print();
        cout << endl;
    };

    void perimeter()
    {
        double perimeter = d1 + d2 + d3;
        cout << "PERIMETER: " << perimeter << endl;
    }

    void area()
    {

        double semiperimeter = (d1 + d2 + d3) / 2;

        double area = sqrt(semiperimeter * (semiperimeter - d1) * (semiperimeter - d2) * (semiperimeter - d3));

        cout << "AREA: " << area << endl;
    }

    ~Triangle()
    { 
        cout << "Destroyed the Triangle" << endl;
    }
};

int main()
{
    Triangle t{{1.3, 2.4}, {4.2, 2.3}, {0.3, 3.0}};

    t.print();
    t.perimeter();
    t.area();

    return 0;
}
