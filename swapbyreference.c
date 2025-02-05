#include <stdio.h>
void exchange(int *,int *);
void main()
{
    int a=10;
    int b=20;
    exchange(&a,&b);
    printf("a= %d  b = %d",a,b);
}
void exchange(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}