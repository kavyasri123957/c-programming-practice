#include<stdio.h>
void reverse(int arr[],int *n){
int i=0;
int j=*n-1;
int temp;
while (i<j){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    
}

}
int main()
{
    
  
    int n=5;
    int arr[]={1,2,3,4,5};
    reverse(arr,&n);
    for (int i=0;i<n;i++){

    printf("%d",arr[i]);
    }
    return 0;

}