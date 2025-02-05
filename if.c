#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    printf("Entered character is an alphabet");
    else
    printf("entered character is not an alphabet");
}