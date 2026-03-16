#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=10,y=20;
    swap(&x,&y);
    printf("after swap x=%d and y=%d",x,y);
}