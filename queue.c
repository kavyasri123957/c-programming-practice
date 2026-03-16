#include<stdio.h>
int queue[5];
int front=-1,rear=-1;
void enqueue(int value)
{
    if(rear==4)
    {
        printf("queue overflow\n");
    }
    else{
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=value;
    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("queue underflow\n");
    }
    else{
        printf("deleted elemet: %d\n",queue[front]);
        front++;
    }

}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
        
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;

}
