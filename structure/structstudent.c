#include <stdio.h>
struct student{
int roll;
char name[10];
float m1,m2,m3,total,per;
}s;
void main()
{
    // struct student s,s1,s2;
printf("Enter roll no,name and marks of 3 subjects");
scanf("%d %s %f %f %f",&s.roll,s.name,&s.m1,&s.m2,s.m3);
s.total=s.m1+s.m2+s.m3;
s.per=s.total/3;
printf("total =%f and percentage =%f",s.total,s.per);
return 0;
}