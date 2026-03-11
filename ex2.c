#include<stdio.h>
int fun(int *p)
{
    *(p+1)=*(p)+1;
    return *(p+1);

}
int main()
{
    int a[2]={5,0};
    int x=fun(a);
    printf("%d",x);
    
}