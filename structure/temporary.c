#include <stdio.h>
 #include <math.h> 
  float distance(float x1, float y1, float x2, float y2)
{
 return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
float area(float x1, float y1, float x2, float y2, float x3, float y3)
 {
  return fabs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0); 
}
 int isInside(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y) 
{
  float A = area(x1, y1, x2, y2, x3, y3);
float A1 = area(x, y, x1, y1, x2, y2); 
   float A2 = area(x, y, x2, y2, x3, y3); 
float A3 = area(x, y, x1, y1, x3, y3);
   return (A == A1 + A2 + A3);
  }
 int main() 
 {
  float x1, y1, x2, y2, x3, y3, x, y;
 printf("Enter the coordinates of the triangle vertices A, B, C:\n");
  scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
  printf("Enter the coordinates of the point to check:\n");
  scanf("%f %f", &x, &y);
  if (isInside(x1, y1, x2, y2, x3, y3, x, y)) 
{
 printf("The point (%.2f, %.2f) is inside the triangle ABC\n", x, y);
}
 else {
 printf("The point (%.2f, %.2f) is NOT inside the triangle ABC\n", x, y); 
 }
   return 0;
}