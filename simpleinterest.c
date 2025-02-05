#include <stdio.h>
void main()
{
    int p,t;
    float r;
    printf("Enter the priciple value and time");
    scanf("%d %d",&p,&t);
    printf("Enter the rate of interest");
    scanf("%f",&r);
    int interest=(p*r*t)/100;
    printf("Interest = %d",interest);
}