#include <stdio.h>
void main()
{
    float avg;
    int marks[5];
    printf("Enter the marks for 5 students \n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&marks[i]);
    }
    int sum=0;
    for(int i=0;i<=4;i++)
    {
        sum+=marks[i];
    }
    avg=sum/5;
    printf("The average of the marks entered = %f",avg);
}