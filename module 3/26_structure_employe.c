#include<stdio.h>
struct employee
{
    int no;
    char name[20];
    char address[50];
    int age;
};
int main()
{
    int n;
    printf("enter the number of employee");
    scanf("%d",&n);
    struct employee s[n];
    for(int i=0;i<n;i++)
    {
        printf("enter employee no");
        scanf("%d",&s[i].no);
        printf("enter employee name");
        scanf("%s",&s[i].name);
        printf("enter employee address");
        scanf("%s",&s[i].address);
        printf("enter employee age");
        scanf("%d",&s[i].age);
    }
    for(int i=0;i<n;i++)
    {
        printf("no = %d  \nname = %s  \naddress = %s  \nage = %d  \n",s[i].no,s[i].name,s[i].address,s[i].age);
    }
    return 0;
}