#include <stdio.h>
int sum(int);
int result=0;
void main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int s=sum(num);
    printf("Sum = %d",s);
}
int sum(int num)
{
    if(num==0)
    return result;
    int digit=num%10;
    result+=digit;
    num=num/10;
    sum(num);
}