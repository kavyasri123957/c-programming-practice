#include<stdio.h>
int pallindrome(int num){
    int temp=num;
    int digit;
    int rev=0;
    while(num != 0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    return rev;
}
int main()
{
    int n=121;
    int rev=pallindrome(n);
    if(n==rev){
        printf("yes it is pallindrome");
    }
    else{
        printf("not pallindrome");
    }
}