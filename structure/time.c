#include <stdio.h>
typedef struct Time{
    int hours;
    int minutes;
    int seconds;
}st;
void main()
{
    int summinutes=0;
    int sumhours=0;
    int sumseconds=0;
    st s1,s2;
    printf("Enter the first time: Hours,minutes,seconds \n");
    scanf("%d %d %d",&s1.hours,&s1.minutes,&s1.seconds);
    printf("Enter the second time: Hours,minutes,seconds \n");
    scanf("%d %d %d",&s2.hours,&s2.minutes,&s2.seconds);
     sumseconds+=s1.seconds+s2.seconds;
    if(sumseconds>=60){
    summinutes+=1;
    sumseconds-=60;
    }
    summinutes+=s1.minutes+s2.minutes;
    if(summinutes>=60){
    sumhours+=1;
    summinutes-=60;
    }
    sumhours+=s1.hours+s2.hours;
    if(sumhours>=24)
    sumhours-=24;
    printf("Time = %d : %d : %d",sumhours,summinutes,sumseconds);
    return 0;
}