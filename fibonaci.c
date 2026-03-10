#include<stdio.h>
int fibo(int a){
    if(a<=1){
        return a;
    }else{
        return fibo(a-1)+fibo(a-2);
    }
}
    int main()
    {
        int  a;
        printf("enter the number:");
        scanf("%d",&a);
        int result=fibo(a);
        printf("fibonaci of %d is %d",a,result);
    }
