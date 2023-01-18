#include<stdio.h>
#include<stdlib.h>

void insert_beg();
void insert_end();
void insert_spec_pos();
void display();
void delete_beg();
void del_end();
void del_spec_pos();
void count();

struct node {
    int data;
    struct node *next;
};
struct node *start=NULL;
int main()
{
    int choice;
    while (1) {
    printf("\n Menu ");
    printf("\n 1.Insert at beginning : ");
    printf("\n 2.Insert at end : ");
    printf("\n 3.Insert at specific position : ");
    printf("\n 4.delete from beginning : ");
    printf("\n 5.delete from end : ");
    printf("\n 6.delete from spec position : ");
    printf("\n 7.Display ");
    printf("\n 8.Exit ");
    printf("Enter the choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 : insert_beg(); break;
        case 2 : insert_end(); break;
        case 3 : insert_spec_pos(); break;
        case 4 : delete_beg(); break;
        case 5 : del_end(); break;
        case 6 : del_spec_pos(); break;
        case 7 : display(); break;
        case 8 : exit(0); break;
        default : printf("Invalid input");
    }
}
return 0;
}

void count()
{
    int i,count;
    while(i!=NULL)
    {
        count++;
    }
}
void insert_beg()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d",&newnode->data);
    if (start==NULL)
    {
        newnode->next=0;
        start=newnode;
    }
    else
    {
        newnode->next=start;
        start=newnode;
    }
}

void insert_end()
{
    struct node *temp,*newnode;
    printf("Enter the data: :");
    scanf("%d",&newnode->data);
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=0;
}

void insert_spec_pos()
{
    struct node *newnode,*temp;
    int position,i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter position");
    scanf("%d",&position);
    if(position>count || position<0)
    {
        printf("Incvalid position");
    }
    else
    {
        temp=start;
        while(i<position)
        {
            temp=temp->next;
            i++;
        }
        printf("Enter the data");
        scanf("%d,&newnode->next=data");
        newnode->next=temp->next;
        temp->next=newnode;
    }


}
void del_beg()
{

}

void display()
{
    struct node *ptr;
    // ptr=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
    {
        printf("list is empty");
    }
    else {
        ptr=start;
        while(ptr->next!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
          printf("\n");
    }
    }
    

}
