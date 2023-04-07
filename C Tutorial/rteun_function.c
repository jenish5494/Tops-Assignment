#include <stdio.h>
int name(int a, int b)
{
    int answer = a + b;
    return answer;
}
int main()
{
    int a;
    a = name(50, 20);
    printf("%d", a);
    return 0;
}