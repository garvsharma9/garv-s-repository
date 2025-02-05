#include <stdio.h>
void display(int *,int);
int main()
{
    // int i=10;
    // short int length;
    // printf("%d",sizeof(length));
    // int result=++i + ++i + ++i;
    // printf("%d",result);
//    unsigned char ch;
//     for(ch=0;ch<=254;ch++)
//     {
//         printf("%d %c",ch,ch);
//         printf("\n");
//     }
//      printf("%d %c",ch,ch);
//      return 0;
    
//     int num[]={24,34,12,44,56,17};
//     int i,*j;
//     j=&num[0];
//    display(j,6);
// }
// void display(int *j,int n)
// {
//      for(int i=0;i<n;i++)
//     {
//         printf("Address %d",j);
//         printf("Element %d\n",*j);
//         j++;
//     }
int arr[4][2]={
    {1,2,},
    {3,4},
    {5,6},
    {7,8}
};
printf("Addresses\n");
for(int i=0;i<4;i++)
{
    printf("%u\n",arr[i]);
}
}
