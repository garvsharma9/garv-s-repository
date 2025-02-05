#include <stdio.h>
int gcd(int,int);
void main()
{
    int num1,num2,remainder;
    int result;
    printf("Enter the numbers");
    scanf("%d %d",&num1,&num2);
    printf("%d %d",num1,num2);
    if(num1>num2)
    result=gcd(num1,num2);
    else
    result = gcd(num2,num1);
    printf("GCD = %d",result);
}
int gcd(int num1,int num2)
{
    if(num2==0)
    {
        return num1;
    }
   int  c=num1/num2;
    int temp=num2;
    num2=num1-(c*num2);
    num1=temp;
    gcd(num1,num2);
}