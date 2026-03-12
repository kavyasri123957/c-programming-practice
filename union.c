#include<stdio.h>
union student{
    int roll_num;
    char name[80];

};
int main()
{
    union student d;
    printf("enter the name os the student:");
    scanf("%s",d.name);
    printf("enter the roll number ");
    scanf("%d",&d.roll_num);
    printf("your name is=%s\n",d.name);
    printf("your roll number id =%d",d.roll_num);
    return 0;
}