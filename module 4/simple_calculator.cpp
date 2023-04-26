#include<iostream>
using namespace std;

class calculator
{
    public:
    int a,b;
    void getvalue()
    {
        cout<<"Enter two value"<<endl;
        cin>>a>>b;
    }
    void addition()
    {
        cout<<"addition of two value is = "<<a+b<<endl;
    }
    void subtraction()
    {
        cout<<"subtraction of two value is = "<<a-b<<endl;
    }
    void multiplication()
    {
        cout<<"multiplication of two value is = "<<a*b<<endl;
    }
    void division()
    {
        cout<<"division of two value is = "<<a/b<<endl;
    }
};
int main()
{
    calculator c1,c2;
    c1.getvalue();
    c1.addition();
    c1.subtraction();
    c1.multiplication();
    c1.division();
    c2.getvalue();
    c2.addition();
    c2.subtraction();
    c2.multiplication();
    c2.division();
    return 0;
}
