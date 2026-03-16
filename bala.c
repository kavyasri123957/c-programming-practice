#include <stdio.h>
#include <string.h>
char stack[100];
int top = -1;
void push(char c)
{
    stack[++top] = c;
}
char pop()
{
    if(top == -1)
        return '#';   
    return stack[top--];
}
int isBalanced(char expr[])
{
    for(int i = 0; i < strlen(expr); i++)
    {
        if(expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
        {
            push(expr[i]);
        }

        else if(expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
        {
            char ch = pop();

            if((expr[i] == ')' && ch != '(') ||
               (expr[i] == '}' && ch != '{') ||
               (expr[i] == ']' && ch != '['))
            {
                return 0; 
            }
        }
    }

    if(top == -1)
        return 1; 
    else
        return 0;  

int main()
{
    char expr[100];

    printf("Enter expression: ");
    scanf("%s", expr);

    if(isBalanced(expr))
        printf("Balanced Expression\n");
    else
        printf("Not Balanced Expression\n");

    return 0;
}