#include<stdio.h>
#include<ctype.h>
int stack[100];
int top=-1;
void push(int val)
{
    stack[++top]=val;
}
int pop()
{
    return stack[top--];
}
int evaluatepostfix(char *expr)
{
    for(int i=0;expr[i];i++)
    {
        if(isdigit(expr[i]))
        {
            push(expr[i]-'0');
        }
        else{
            int b=pop();
            int a=pop();
            switch(expr[i])
            {
                case'+':push(a+b);break;
                 case'-':push(a-b);break;
                  case'/':push(a/b);break;
                   case'*':push(a*b);break;
                   }
        }
    }
    return pop();
}
int main()
{
    char expr[]="52+62/*";
    printf("result:%d\n",evaluatepostfix(expr));
    return 0;
}