#include<iostream>
using namespace std;

class account
{
    public:
    string name;                //   Name of the depositor
    int acnum;                  //   Account Number
    string actype;              //   Type of Account
    float balance;              //   Balance amount

    void getvalue()
    {
        cout<<"Enter account type : ";
        cin>>actype;
        cout<<"Enter depositor name : ";
        cin>>name;
        cout<<"Enter account number : ";
        cin>>acnum;
        cout<<"Enter account ballance : ";
        cin>>balance;
    }
    void deposite()
    {
        int damount;               //   deposit amount
        cout<<"Enter amount for deposit : ";
        cin>>damount;
        balance+=damount;
    }
    void withdraw()
    {
        int wamount;                //   withdraw amount
        cout<<"Balance is : "<<balance<<endl;
        cout<<"Enter withdraw amount : ";
        cin>>wamount;
        balance-=wamount;              
    }
    void display()
    {
        cout<<"Name of account holder : "<<name<<endl;
        cout<<"Balance is : "<<balance<<endl;
    }
};  

int main()
{
    account p1,p2;
    p1.getvalue();
    p1.deposite();
    p1.withdraw();
    p1.display();
    return 0;
}