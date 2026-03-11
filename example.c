#include<stdio.h>
int fun(int*p)
{
    return *(p++)+*p;
}
int main()
{
    int a[3]={1,2,3};
    int x=fun(a);
    printf("%d",x);
}