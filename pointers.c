#include<stdio.h>
int main()
{
   int a,b,temp;
   int *p;
   int *q;
   printf("before swapping:");
   scanf("%d%d",&a,&b);
   printf("value of a is %d and b is %d",a,b);
   p=&a;
   q=&b;
   printf("after swapping:");
   temp=*p;
   *p=*q;
   *q=temp;
   printf("a value is %d and b value is%d",a,b);
   return 0;
}
