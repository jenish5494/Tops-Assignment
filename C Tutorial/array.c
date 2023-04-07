#include<stdio.h>
int main()
{
    int even_sum;
    int odd_sum;

    int a[10];
    for (int i = 0; i < 10; i++)
    {                                                           
        printf("enter number: ");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is even\n", a[i]);
            even_sum = even_sum+a[i];

        }
        else
        {
            printf("%d is odd\n", a[i]);
            odd_sum= odd_sum+a[i];
        }
    }
         
       return 0;
}