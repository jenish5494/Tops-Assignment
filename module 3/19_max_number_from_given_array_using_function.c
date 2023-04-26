#include <stdio.h>
int main()
{
    int n;
    float array1[100];
    printf("Enter the max number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d : ", i + 1);
        scanf("%f", &array1[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (array1[0] < array1[i])
        {
            array1[0] = array1[i];
        }
    }
    printf("Largest element = %.1f", array1[0]);
    return 0;
}