#include<stdio.h>
int main(){
    int enterpin;
    int correctpin=123;
    printf("enter the pin:");
    scanf("%d",&enterpin);
    if (enterpin==correctpin){
        printf("login successful");
    }
    else{
        printf("unsuccessful");
    }
    return 0;
}