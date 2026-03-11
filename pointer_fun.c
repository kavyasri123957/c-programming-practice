#include<stdio.h>
int fun(int *a){
    int b=*a;
*a=*a+5;
return b;
}
int main()
{
    int x=10;
    int y=fun(&x);
  printf("%d%d",x,y);

}