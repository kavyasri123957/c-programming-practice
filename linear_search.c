#include<stdio.h>
int main(){
    int a[0],n,i,key,found=0;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); //a[0]=5
    }
    printf("enter elements to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key)
        {
            printf("element found at position %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("element not found");
    }
    return 0;
}