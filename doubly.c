#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev; 
struct Node *next;

};
int main()
{
    struct Node *head,*second,*third;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    second->data=20;
    third->data=30;
    head->prev=NULL;
     head->next=second;
    head->prev=head;
     head->next=third;
     head->prev=second;
     head->next=NULL;
     struct Node*temp=head;
     while(temp != NULL)
     {
        printf("%d <->",temp->data);
        temp=temp->next;
     }
     printf("NULL");
     return 0;
}
