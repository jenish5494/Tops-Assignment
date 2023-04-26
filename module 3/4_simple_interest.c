#include<stdio.h>
int main()
{
    float principle,interest,rate,year;
    printf("enter principle amount : ");
    scanf("%f",&principle);
    printf("enter rate : ");
    scanf("%f",&rate);
    printf("enter year : ");
    scanf("%f",&year);
    interest=(principle*rate*year)/100;
    printf("simple interest is %f",interest);
    return 0;
}