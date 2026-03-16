#include<stdio.h>
int fibo(int n)
{
    int a=0,b=1,c,i;
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;

}
int main()
{
    int n=5;
    int result=fibo(n);
    printf("fibonacci series:%d",result);
}