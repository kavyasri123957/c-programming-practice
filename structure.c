#include<stdio.h>
struct student{
    int roll_number;
    char name[10];
    float marks;
};
int main()
{
    struct student s1;
    printf("enter the name:");
    scanf("%s",s1.name);
    printf("enter the rollnumber:");
    scanf("%d",&s1.roll_number);
printf("enter the marks :");
scanf("%f=marks",&s1.marks);
printf("%s=name\n",s1.name);
printf("%d=roll_name\n",s1.roll_number);
    printf("%f=marks\n",s1.marks);
    return 0;
}