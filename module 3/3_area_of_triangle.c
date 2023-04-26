#include<stdio.h>
int main()
{
    float height,base,area;
    printf("enter the value of height : ");
    scanf("%f",&height);
    printf("enter the value of base : ");
    scanf("%f",&base);
    area=0.5*height*base;
    printf("area is : %f",area);
    return 0;
}