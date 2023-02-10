// queue using linked list
#include<stdio.h>
#include<stdlib.h>

void enqueue(int x);
void display();
void delete();

struct node {
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;

int main()
{
    
return 0;
}



void enqueue(int x)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=0;
if (front==0&&rear==0)
{
    front=rear=newnode;
}
else{
    rear->next=newnode;
    rear=newnode;
}
}

void display()
{
struct node *temp;
if(front==0&&rear==0)
{
    printf("queue is empty");
}    
else{
    front=temp;
    while(temp->next!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
}

void delete(int x)
{
struct node *temp;
if(front==0&&rear==0)
{
    printf("queue is empty");
}    
else
{
printf("%d deleted element",x);
temp=front;
front=front->next;
free(temp);
}

}
