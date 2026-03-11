#include<stdio.h>
int  reverse(int a){
    int rev=0;
    int digit;
    while (a !=0 ){
        digit=a%10;
        rev=rev*10+digit;
        a=a/10;

    }
    return rev;
}
int main()
{
    int x=1234;
    int result=reverse(x);
    printf("reverse value:%d",result);
}