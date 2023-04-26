#include<stdio.h>
int main()
{
    int a,soe=0,soo=0,te=0,to=0;                              //   soe=sum of even, soo=sum of odd, te=total even, to=total odd
    printf("enter 10 numbers\n");
    for(int i=1;i<11;i++)
    {
        printf("the number is : ");
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("%d is even\n",a);
            soe+=a;
            te+=1;
        }
        else
        {
            printf("%d is odd\n",a);
            soo+=a;
            to+=1;
        }
    }
    printf("sum of odd is = %d \nsum of even is = %d\n",soo,soe);
    printf("total even numers are = %d \ntotal odd numbers are = %d",te,to);
    return 0;
}