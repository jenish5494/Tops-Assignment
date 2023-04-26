#include <stdio.h>
int main()
{
    int num, large = 0, temp;
    printf("enter a digit to find greater from that digit : ");
    scanf("%d", &num);
    while (num != 0)
    {
        temp = num % 10;
        if (large <= temp)
        {
            large = temp;
        }
        num /= 10;
    }

    printf("the largest number from the digit is : %d", large);
    return 0;
}