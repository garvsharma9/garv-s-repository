#include<stdio.h>
#include<string.h>
void concatinate(char *s,char *t)
{
    while(*t!='\0')
    {
        *t++;
    }
    while(*s!='\0')
    {
        *t=*s;
        *s++;
        *t++;
    }
    *t='\0';

}
void main()
{
    char source[]="Sharma";
    char target[20]="Garv";
    concatinate(source,target);
    printf("source = %s\n",source);
    printf("Target string = %s",target);
}