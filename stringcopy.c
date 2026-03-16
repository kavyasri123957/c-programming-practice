#include<stdio.h>
#include<string.h>
void string_copy(char *ch1,char *ch2){
    strcpy(ch1,ch2);

}
int main()
{
    char str1[20]="kavya";
    char str2[30]="pujitha";
    string_copy(&str1,&str2);
    printf("%s",str1);
    return 0;
    
}