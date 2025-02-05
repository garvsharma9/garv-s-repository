#include <stdio.h>
void main()
{
    int arr[5]={12,33,1,67,21};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=3;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
}