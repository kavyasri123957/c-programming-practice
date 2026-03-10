#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,5,1};
    int n=7;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                 printf("duplicate elements %d",arr[i]);

            }

        }
      
}


    }
