#include <stdio.h>
void main()
{
    char ch;
    printf("Enter any one of the alphabets a,b or c");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        printf("A as in apple\n");
        break;
        default:
        printf("I am in default case");
    }
}