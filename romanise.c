#include <stdio.h>
int roman(int,int,char);
void main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    year=roman(year,1000,'M');
    year=roman(year,500,'D');
    year=roman(year,100,'C');
    year=roman(year,50,'L');
    year=roman(year,10,'X');
    year=roman(year,5,'V');
    roman(year,1,'I');
    
}
int roman(int yr,int num,char ch)
{
    int a,b;
    b=yr/num;
    for(a=1;a<=b;a++)
    {
        printf("%c",ch);
    }
    return (yr/num);
}
