#include <iostream>
using namespace std;
class matrix
{
    int array[5], answer[5];

public:
    void getdata()
    {
        cout << "Enter value of array : " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> array[i];
        }
    }
    matrix operator+(matrix obj)
    {
        for (int i = 0; i < 5; i++)
        {
            answer[i] = array[i] + obj.array[i];
        }
    }
    void display()
    {
        cout << "Sum of array is : \n";
        for (int i = 0; i < 5; i++)
        {
            cout << answer[i] << "  ";
        }
    }
};
int main()
{
    matrix m1, m2;
    m1.getdata();
    m2.getdata();
    m1 + m2;
    m1.display();
    return 0;
}