#include <stdio.h>
#include <string.h>
void copy(char *s,char *t)
{
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
    char source[]="Garv";
    char target[4];
    copy(source,target);
    printf("%s",target);
}