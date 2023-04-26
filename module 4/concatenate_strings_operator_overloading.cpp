#include <iostream>
#include <string.h>
using namespace std;

class String
{
        char str[20];

public:
        void get()
        {
                cout << "\n Enter String   :   ";
                cin >> str;
        }
        void display()
        {
                cout << str;
        }
        String operator+(String x) // Concatenating String
        {
                String s;
                strcat(str, x.str);
                strcpy(s.str, str);
                return s;
        }
};

int main()
{
        String str1, str2, str3;

        str1.get();
        str2.get();
        str3 = str1 + str2;
        cout << "\n Concatenated String is    :  ";
        str3.display();
        return 0;
}