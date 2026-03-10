#include<stdio.h>
int main(){
    int a,b;
    int *p;
    int *pp;
    printf("enter the both numbers :");
    scanf("%d%d",&a,&b);
    p=&a;
    pp=&b;
    if(*p>*pp)
{
    printf(" a is greater %d",a);
}
else{
    printf("b is greater %d",b);
}
return  0;
}