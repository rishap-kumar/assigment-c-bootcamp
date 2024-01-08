#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("value of radius ");
    scanf("%d,%f",&r,&a);
    a=3.14*r*r;
    printf("area of circle=%f",a,r );
    return 0;
}
