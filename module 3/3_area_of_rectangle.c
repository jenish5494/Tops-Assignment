#include<stdio.h>
int main()
{
    float length,width,area;
    printf("enter the value of length : ");
    scanf("%f",&length);
    printf("enter the value of width : ");
    scanf("%f",&width);
    area=length*width;
    printf("area is : %f",area);
    return 0;
}