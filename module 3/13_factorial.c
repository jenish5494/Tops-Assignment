#include<stdio.h>
int factorial(int n)
{
    if(n>1)
    {
        return n*factorial(n-1); 
    }
}
int main()
{
    int n,m;
    printf("enter the number");
    scanf("%d",&n);
    m=factorial(n);
    printf("factorial of %d is = %d",n,m);
    return 0;
}