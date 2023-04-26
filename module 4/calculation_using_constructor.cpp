#include<iostream>
using namespace std;
class calculation
{
    public:

    calculation(float a,float b)
    {
        cout << "addition is = " << a+b << endl;
        cout << "subtraction is = " << a-b << endl;
        cout << "multiplication is = " << a*b << endl;
        cout << "division is = " << a/b << endl;
        cout << endl;
    }
};
int main()
{
    calculation d1(30,20), d2(5,2);
    return 0;
}