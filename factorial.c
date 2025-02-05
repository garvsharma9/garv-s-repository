#include <stdio.h>
int num=1;
int fact(int n)
{
    if(n==1)
    {
        return num ;
    }
  num=  n*fact(n-1);
}
void main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    int result = fact(num);
    printf("%d",result);
}