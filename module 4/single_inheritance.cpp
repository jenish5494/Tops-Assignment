#include<iostream>
using namespace std;

class cricketer
{
	public:
	string name;
	int arun;				// average run
	int trun;				// total run
	int brun;				// best run
	int tinnings;			// total tinnings
	int notout;				// total notout
};

class batsman:public cricketer
{
	public:
	void inputdata()
	{
		cout<<"Enter name of batsman : ";
		getline(cin,name);
		cout<<"Enter total run : ";
		cin>>trun;
		cout<<"Enter best score : ";
		cin>>brun;
		cout<<"Enter innings : ";
		cin>>tinnings;
		cout<<"Enter how many times batsman notout : ";
		cin>>notout;
		arun = trun / (tinnings-notout);
	}
	void displaydata()
	{
		cout<<"Name of batsman : "<<name<<endl;
		cout<<"Total run : "<<trun<<endl;
		cout<<"Best score : "<<brun<<endl;
		cout<<"Total innings : "<<tinnings<<endl;
		cout<<"Total notout : "<<notout<<endl;
		cout<<"Average of batsman is : "<<arun<<endl;
	}
};

int main()
{
	batsman b1,b2;
	b1.inputdata();
	b1.displaydata();
	return 0;
}