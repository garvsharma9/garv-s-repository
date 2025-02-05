#include <stdio.h>
void main()
{
    float cel,far;
    printf("Enter the temperature in celcius");
    scanf("%f",&cel);
    far=(cel*1.8)+32;
    printf("temperature in farenheit = %f",far);
}