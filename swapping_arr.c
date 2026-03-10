#include<stdio.h>
int main()
{
   int n;
   int arr1[20];
   int arr2[30];
   int arr3[10];
   printf("entr the number of elements:");
   scanf("%d",&n);
   for (int i=0;i<n;i++){
    scanf("%d",&arr1[i]);

   }

   for (int i=0;i<n;i++){
    scanf("%d",&arr2[i]);

   }
   for (int i=0;i<n;i++){
    printf("before swapping:%d and %d",arr1[i],arr2[i]);
   }
   for (int i=0;i<n;i++){
    arr3[i]=arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=arr3[i];
    printf("after swapping:%d and %d",arr1[i],arr2[i]);
   }

}

    
   

    