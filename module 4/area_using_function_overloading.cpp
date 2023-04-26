#include <iostream>
using namespace std;
class operation
{
public:
    void area(float a)
    {
        cout << "Area of circle is : " << 3.14 * a * a << endl;
    }
    void area(float a, float b)
    {
        cout << "Area of triangle is : " << .5 * a * b << endl;
    }
    void area(float a, float b, float c)
    {
        cout << "Area of rectangle is : " << a * b << endl;
    }
};

int main()
{
    operation a1, a2;
    a1.area(10);
    a1.area(5, 6);
    a1.area(10, 20, 23);
    return 0;
}