#include<stdio.h>
int main()
{
    float year,days;
    printf("enter the days : ");
    scanf("%f",&days);
    year = days / 365;
    printf("year is : %f",year);
    return 0;
}