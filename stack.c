#include<stdio.h>
#include<stdlib.h>
#define size 4

int Top=-1;
int inp_array[size];

void push();
void pop();
void show();

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Push an element:\n2.Pop an element\n3.Show\n4.Exit");
        printf("\nEnter an choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop(); 
            break;
            case 3: show(); 
            break;
            case 4: exit(0); 
            break;
            default : printf("\nInvalid input!");
        }
    }
}
void push()
{
    int x;
    if (Top==size-1)
    {
        printf("stack overflow");
    }
    else
    {
        printf("Enter element to be inserted :");
        scanf("%d",&x);
        Top=Top+1;
        inp_array[Top]=x;
    }
}
void pop()
{
    if(Top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        printf("\nPopped Element :%d",inp_array[Top]);
        Top=Top-1;
    }
}
void show()
{
    if (Top==-1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        printf("\nElements in stack :");
        for(int i=Top;i>=0;--i)
        {
            printf("\n%d",inp_array[i]);
        }
    }
}
