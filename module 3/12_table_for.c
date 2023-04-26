#include<stdio.h>
int main()
{
    int n,k;
    printf("enter the value of table number\n");
    scanf("%d",&n);
    printf("enter maximum number for table\n");
    scanf("%d",&k);
    for(int i=1;i<=k;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}