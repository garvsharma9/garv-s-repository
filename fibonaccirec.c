#include <stdio.h>
void fibo(int,int,int);
void main()
{
    fibo(0,1,25);
}
void fibo(int a,int b,int limit)
{
    if(limit==0)
    {
        return;
    }
    limit=limit-1;
    printf("%d  ",b);
    int temp=b;
    int temp1=a;
    b=a+b;
    a=temp;
    
    fibo(a,b,limit);
}