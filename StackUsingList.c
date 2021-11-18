#include<stdio.h>
#include<stdlib.h>
struct list 
{
    int data;
    struct list*next;
};
typedef struct list list;
list*head=NULL;
list*temp;
void push(int data)
{
    list*ptr=head;
    list*node=(list*)malloc(sizeof(list));
    node->data=data;
    node->next= NULL;
    if(ptr==NULL)
    {
        head=node;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=node;
    }
}
void pop()
{
    temp=head;
    list*prev=head;
    if(temp==NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        printf("%d\n",temp->data);
        free(temp);
        head=NULL;
        return;
    }
    prev->next=NULL;
    printf("%d\n",temp->data);
    free(temp);
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void top()
{
    temp=head;
    if(temp==NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    printf("%d\n",temp->data);
}
int main()
{
    int val=1;
    while(val!=5)
    {
        printf("1 for push|2 for pop|3 for display|4 for top|5 for stop: ");
        scanf("%d",&val);
        if(val==1)
        {
        int data;
        printf("Enter the value to be pushed ");
        scanf("%d",&data);
        push(data);
        }
        else if(val==2)
        {
            pop();
        }
        else if(val==3)
        {
            display();
        }
        else
        {
            top();
        }
    }
}