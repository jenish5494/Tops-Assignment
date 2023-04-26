#include<iostream>
using namespace std;
class operation
{
    public:

    void calculation (float a,float b)
    {
        cout<<"Division is : "<<a/b<<endl;
    }
    void calculation (float a,float b,float c)
    {
        cout<<"Multiplicaton is : "<<a*b*c<<endl;
    }
    void calculation (float a,float b,float c,float d)
    {
        cout<<"Addition is : "<<a+b+c+d<<endl;
    }
    void calculation (float a,float b,float c,float d,float e)
    {
        cout<<"Subtraction is : "<<a-b-c-d-e<<endl;
    }
};

int main()
{
    operation a1,a2;
    a1.calculation(5,6);
    a1.calculation(10,20,23);
    a2.calculation(25,30,35,40);
    a2.calculation(500,100,25,35,15);
    return 0;
}