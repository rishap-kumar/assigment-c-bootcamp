#include<stdio.h>
int main()
{
    int x;
     printf("enter 3 digit number");
     scanf("%d",&x);

     x=(x%10)*100+(x/10);
     printf("number after rotation is %d",x);
     return 0;
}
