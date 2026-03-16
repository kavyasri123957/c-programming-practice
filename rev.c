#include<stdio.h>
int rev_num(int num,int rev){
    if(num==0)
        return rev;
    return rev_num(num/10,rev*10+num%10);
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int result=rev_num(n,0);
    printf(" reversed number :%d",result);
}