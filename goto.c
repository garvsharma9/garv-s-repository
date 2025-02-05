#include <stdio.h>
#include <stdlib.h>
void main()
{
    int goals;
    printf("Enter the number of goals scored against India");
    scanf("%d",&goals);
    if(goals<=5)
    goto s;
    else{
        printf ( "About time soccer players learnt C\n" ) ; 
 printf ( "and said goodbye to soccer\n" ) ;
    exit(1);
      }
    s:
    printf("To err is human!\n");
    return 0;
}