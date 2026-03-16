#include<stdio.h>
int sumtail(int n,int acc)
{
    if(n==0)
    {
        return acc;
    }
    return sumtail(n-1,acc+n);
}
int main()
{
    int n=5;
    printf("sum of first %d numbers =%d\n",n,sumtail(n,0));
    return 0;
}