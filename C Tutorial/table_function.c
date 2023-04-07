#include <stdio.h>
void table(int num)
{
    for (int i = 1; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }
}
int main()
{
    table(59);
    table(89);
    table(102);
    return 0;
}