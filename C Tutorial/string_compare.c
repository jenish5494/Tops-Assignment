#include<stdio.h>
#include<string.h>
int main()
{
    int answer;
    char string1[20]="Zebra";
    char string2[20]="Zebra";
    answer = strcmp(string1,string2);
    printf("your answer is %d", answer);
    return 0;
}