#include <stdio.h>
void main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    xy:
    {
    while(num!=0)
    {
        for(int i=2;i<=num;i++)
        {
            if(num%i==0){
            printf("%d \n",i);
            num=num/i;
            goto xy;
            }
        }
    }
    }
}