#include<stdio.h>
//int fact(int);//function declaration
int fact (int a){//function definition
    if(a<=1){//base condition
        return 1;

    }else{
        return a*fact(a-1);//recursive case

    }
}
int  main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
int result=fact(a);
printf("factorial of %d =%d",a,result);

}