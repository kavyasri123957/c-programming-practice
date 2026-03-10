#include<stdio.h>
int main()
{
    int arr[100]={12,34,67};
    int i,n=3;
int max=arr[0];
for (i=0;i<n;i++){
    if(arr[i]>max)
    max=arr[i];
    
}
int min=arr[0];
for (i=0;i<n;i++){
    if(arr[i]<min)      
    min=arr[i];
    
}
printf("maximum and min %d and %d",min,max);
return 0;
}
