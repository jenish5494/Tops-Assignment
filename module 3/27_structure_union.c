#include <stdio.h>
struct Employee
{
    int AGE;
    char NAME[50];
    char DEP[20];
    float SALARY;
};
union Person
{
    int age;
    char name[50];
    char dep[30];
    float salary;
};
int main()
{
    struct Employee emp1;
    union Person Person1;
    printf("The Size of Employee Structure = %d\n", sizeof(emp1));
    printf("The Size of Person Union = %d\n", sizeof(Person1));
    return 0;
}