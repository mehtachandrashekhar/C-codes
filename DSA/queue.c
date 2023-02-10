#include<stdio.h>
#include<stdlib.h>
#define size 100
void enqueue();
void dequeue();
void show();

int queue[size];
int front= -1;
int rear= -1;

int main()
{
    int n;

    while (1)
    {
        printf("\n press 1 for insert element \n press 2 for delete element\n press 3 for display \n press 4 for exit :");
        scanf("%d",&n);
        
        switch(n)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: show();    break;
            case 4: exit(0);
        }
    }
}

void enqueue()
{
    int insert_item;
    if (rear == size-1)
        printf("\nqueue is overflow");
    else 
    {
        if (front== -1)
        front = 0;
        printf("enter the element to be inserted:");
        scanf("%d",&insert_item);
        rear = rear+1;
        queue[rear]=insert_item;
    }    
}

void dequeue()
{
    if (front == -1 || front > rear )
    {
        printf("\n queue is underflow");
    }
    else 
    {
        printf("Element deleted from queue is %d",queue[front]);
        front = front+1;
    }
}

void show()
{
    if (front == -1)
        printf("\nempty queue");
    else 
    {
        printf("\nqueue:");
        for (int i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
            printf("\n");
        }
    }

}