#include<stdio.h>
int main()
{
    int password=1234;
    int crtpassword;
    printf("enter the password");
    scanf("%d",&crtpassword);
    while(crtpassword==password){
        printf("login successul");
    }
    printf("try againing!!");
}