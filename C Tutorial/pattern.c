#include <stdio.h>
int main()
{
    int k=5;
    for (int i = 1; i <= 5; i++)
    {
        fro (int j = 1; j <= k; j++)
        {
            printf("* ");
        }
        k--;
        printf("\n");
    }

    return 0;
}