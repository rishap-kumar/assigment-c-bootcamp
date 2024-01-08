#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("enter three digit number");
    scanf("%d",&x);
    sum=x%10;
    x=x/10;
    sum=(x%10)+sum;
    x=x/10;
    sum=x+sum;

    printf("sum=%d",sum);

    return 0;
}

