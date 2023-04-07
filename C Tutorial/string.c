#include <stdio.h>
int main()
{
    char name[10];
    char email[20];
    char age[20];
    char city[10];
    char number[10];
    char address[20];

    printf("enter the name:\n");
    scanf("%s", name);
    gets(name);

    printf("enter the email:\n");
    scanf("%s", email);
    gets(email);

    printf("enter the age:\n");
    scanf("%s", age);
    gets(age);

    printf("enter the city:\n");
    scanf("%s", city);
    gets(city);

    printf("enter the number:\n");
    scanf("%s", number);
    gets(number);

    printf("enter the address:\n");
    scanf("%s", address);
    gets(address);
}