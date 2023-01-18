#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

struct node {
    int data;
    struct node *next;
};
struct node *head;

int main ()  
{  
    int choice=0;     
    while(1)  
    {  
        printf("\nMenu\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice : ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Please Enter valid choice ");  
        } 
    } 
    return 0;
}

void push()
{
    int data;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("stack is full");
    }
    else
    {
        printf("Enter the value :");
        scanf("&data");
        if(head==NULL)
        {
            ptr->data=data;
            ptr->next=NULL;
            head=ptr;
        }
        else
        {
            ptr->data=data;
            ptr->next=head;
            head=ptr;
        }
    }
}

void pop()
{
    int item;
    struct node *ptr;
    if(head==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        item=head->data;
        ptr=head;
        head=head->next;
        free(ptr);
        printf("item popped");
    }
}

void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->data);  
            ptr = ptr->next;  
        }  
    }  
}  