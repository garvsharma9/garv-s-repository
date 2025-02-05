#include <stdio.h>
void main()
{
    int arr[]={10,20,36,72,45,36};
    int *j,*k;
    j=&arr[4];
    k=(arr);
    if(j==k)
    printf("the pointers point at same value");
    else
    printf("The points do not point at same value");
}