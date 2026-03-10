#include<stdio.h>
#include<string.h>
int main()
{
    int char1[10],char2[50];
    printf("enter the two strings :");
    scanf("%s%s",char1,char2);
    strcpy(char1,char2);
    printf("%s",char1);
}