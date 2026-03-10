#include<stdio.h>
int main()
{
    int arr[]={9,8,7,6,5};
    int sum=0,n=5;
    float avg;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=(float)sum/n;

    }
    printf("sum =%d and avg is %.2f ",sum,avg);
    return 0;
}