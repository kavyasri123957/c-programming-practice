#include<stdio.h>
#include<string.h>
struct student{
    char name[40];
    int id;
    float marks;

};
int main()
{
    struct student s1;
    s1.id=515;
    s1.marks=89.567;
    strcpy(s1.name,"Bharath");
    printf("%s\n",s1.name);
    printf("%d\n",s1.id);
    printf("%f",s1.marks);
    return 0;
}