#include <stdio.h>
#include <string.h>
int main()
{
    char a[25], b[25];
    printf("Enter the string for palindrome check \n");
    scanf("%s",&a);
    strcpy(b, a);
    strrev(b);
    if (strcmp(a, b) == 0)
    {
        printf("%s is a palindrome.\n", a);
    }
    else
    {
        printf("%s is not a palindrome.\n", a);
    }
    return 0;
}