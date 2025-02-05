#include <stdio.h>
struct employee{
    int emp;
    char name[10];
    float sal;
}s;
void main()
{
    printf("Enter employee numberand name and salary\n");
    scanf("%d %f ",&s.emp,&s.sal);
    printf("Enter name of employee");
    scanf("%[^\n]s",s.name);
    fflush(stdin);
    printf("emp id= %d name %s salary %f",s.emp,s.name,s.sal);
    printf("%d\n",sizeof(s));
}