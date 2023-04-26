#include<stdio.h>
int factorial(int m)
{
    if(m>1)
    {
        return m*factorial(m-1);
    }
}
int main()
{
    int i;
    printf("enter the value of factorial number");
    scanf("%d",&i);
    printf("factorial of i is = %d",factorial(i));
    return 0;
}