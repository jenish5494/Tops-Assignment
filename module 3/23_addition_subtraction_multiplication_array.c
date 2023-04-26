#include <stdio.h>
int main()
{
    int array1[2][2] = {{4, 4}, {3, 3}}, array2[2][2] = {{2, 2}, {1, 1}}, add[2][2], sub[2][2], multi[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            add[i][j] = array1[i][j] + array2[i][j];
            printf("add >> %d + %d = %d\n", array1[i][j], array2[i][j], add[i][j]);
        }
        for (int j = 0; j < 2; j++)
        {
            sub[i][j] = array1[i][j] - array2[i][j];
            printf("sub >> %d - %d = %d\n", array1[i][j], array2[i][j], sub[i][j]);
        }
        for (int j = 0; j < 2; j++)
        {
            multi[i][j] = array1[i][j] * array2[i][j];
            printf("multi >> %d * %d = %d\n", array1[i][j], array2[i][j], multi[i][j]);
        }
    }
    return 0;
}