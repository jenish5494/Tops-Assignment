#include<iostream>
using namespace std;

class person
{
    public:
    string name;
    int age;
};

class student:public person
{
    public:
    float percentage;
};

class teacher:public student
{
    public:
    int salary;
    void getdata()
    {
        cout<<"Enter name : ";
        getline(cin,name);
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Enter percentage : ";
        cin>>percentage;
        cout<<"Enter salary : ";
        cin>>salary;
        cout<<endl;
        cin.ignore();
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Percentage : "<<percentage<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<endl;
    }
};

int main()
{
    teacher t1,t2,t3;
    t1.getdata();
    t1.display();
    t2.getdata();
    t2.display();
    return 0;
}