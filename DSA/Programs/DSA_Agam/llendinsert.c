#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void endinsert(struct node *head,int data);
void viewlinkedlist(struct node *head);
    
int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *tail = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    tail = (struct node *)malloc(sizeof(struct node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = tail;

    tail -> data = 4;
    tail -> next = NULL;

    int new_data = 10;
    endinsert(head, new_data);
    viewlinkedlist(head);
}

void viewlinkedlist(struct node *head)
{
    while(head != NULL)
    {
        printf("%d->",head->data);
        head = head -> next;
    }

    printf("NULL\n");
}
void endinsert(struct node *head, int new_data)
{
    while(head -> next != NULL)
    {
        head = head -> next;
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    head -> next = temp;
    temp -> data = new_data;
    temp -> next = NULL;
}
