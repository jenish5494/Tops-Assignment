#include<stdio.h>
int main()
{
    printf("simple calculator\n");
    float A,B;
    printf("enter the value of A = ",A);
    scanf("%f", &A);
    printf("enter the value of B = ",B);
    scanf("%f", &B);
    printf("A + B = %.1f \n",A + B);
    printf("A - B = %.1f \n",A - B);
    printf("A * B = %.1f \n",A * B);
    printf("A / B = %.1f \n",A / B);
    printf("A %% B = %d",(int)A % (int)B);
    return 0;
}