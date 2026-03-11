#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%p\n",p);
    printf("%p\n",q);
    printf("%d\n",**q);
    printf("%d\n",&p);



    
} 