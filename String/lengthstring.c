#include <stdio.h>
#include <string.h>
int length(char st[]){
    int len=0; int b=0;
    while(st[b]!='\0')
    {
        len++;
        b++;
    }
    return len;
}
void main()
{
    char st[20];
    printf("Enter the string\n");
    gets(st);   
    printf("%d",length(st));
}