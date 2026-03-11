#include<stdio.h>
#include<string.h>
void reverse(char str[],int n)
{
    return str[n-1];
}
int main()
{
   char str[10]="kavya";
   int n=5;
   reverse(str,n);
   printf("revesrsed string:%s",str);
}