#include<stdio.h>
int main()
{
    float num1,num2;
    char op;
    printf("enter the operator from (+,-,*,/,%%)");
    scanf("%c",&op);
    printf("enter the num1");
    scanf("%f",&num1);
    printf("enter the num2");
    scanf("%f",&num2);
    switch(op)
    {
        case '+':
        {
            printf(" %.1f + %.1f = %.1f", num1, num2, num1+num2);
            break;
        }
        case '-':
        {
            printf(" %.1f - %.1f = %.1f", num1, num2, num1-num2);
            break;
        }
        case '*':
        {
            printf(" %.1f * %.1f = %.1f", num1, num2, num1*num2);
            break;
        }
        case '/':
        {
            printf(" %.1f / %.1f = %.1f", num1, num2, num1/num2);
            break;
        }
        case '%':
        {
            printf(" %d %% %d = %d", (int)num1, (int)num2, (int)num1/(int)num2);
            break;
        }
        default:
        {
            printf("invalid operator");
            break;
        }
    }
    return 0;
}