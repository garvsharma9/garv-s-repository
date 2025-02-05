#include <stdio.h>
void main()
{
    int j;
    int b=6;
    int c=1;
  for(int i=1;i<=4;i++)
  {
    for(int a=1;a<=b;a++)
    {
        printf(" ");
    }
    for(j=1;j<=i;j++)
    {
        printf("%d  ",c++);
    }
    b=b-2;
    printf("\n");
  }
}