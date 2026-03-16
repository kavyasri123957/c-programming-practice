#include<stdio.h>
int queue[5];
int front=-1,rear=-1;
void enqueue(int x)
{
    if((rear+1)%5==front)
    printf("queue full\n");
else{
    if(front==-1)
    front=0;
rear=(rear+1)%5;
queue[rear]=x;
}
}
void display()
{
    int i=front;
    if(front==-1)
    printf("queue empty\n");
else{
    while(i != rear)
    {
        printf("%d ",queue[i]);
        i=(i+1)%5;
    }
    printf("%d",queue[rear]);
}
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    return 0;
}