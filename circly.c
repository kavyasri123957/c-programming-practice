#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void traverse(struct Node* head)
{
    if(head==NULL)
    {
        return;
    }
    struct Node*temp=head;
    do{
        struct Node* temp=head;
        do{
            printf("%d  -> ",temp->data);
            temp=temp->;

        }
        while(temp!=head);
    printf("HEAD\n");
    }
    struct Node* insertEnd(struct Node* head,int value)
    {
        struct Node* newNode=(struct  Node*)malloc(sizeof(struct Node));
        newNode->data=value;
        if(head==NULL)
        {
            newNode->next=newNode;
            return newNode;
        }
        struct Node* temp=head;
        while(temp->next != head)
        {
            temp=temp->next;
        }
        
    }
}