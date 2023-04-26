#include<iostream>
using namespace std;

class student
{
    public:
    int rollnum;
};

class test:public student
{
    public:
    int sub1_marks,sub2_marks;
};

class result:public test
{
    public:
    void getdata()
    {
        cout<<"Enter rollnum : ";
        cin>>rollnum;
        cout<<"Enter subject 1 marks : ";
        cin>>sub1_marks;
        cout<<"Enter subject 2 marks : ";
        cin>>sub2_marks;
    }
    void display()
    {
        cout<<endl;
        cout<<"Rollnum of student : "<<rollnum<<endl;
        cout<<"Subject 1 marks is : "<<sub1_marks<<endl;
        cout<<"Subject 2 marks is : "<<sub2_marks<<endl;
        cout<<endl;
    }
};

int main()
{
    result s1,s2;
    s1.getdata();
    s2.getdata();
    s1.display();
    s2.display();
    return 0;
}