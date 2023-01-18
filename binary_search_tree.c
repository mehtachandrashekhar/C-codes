// creating a binary serarch tee
#include<stdio.h>
#include<stdlib.h>

struct node *create_node(int data);
void insert_data(int data);
void inorder(struct node *node);

struct node {
    int data;
    struct node *right, *left;
};

struct node *root = NULL;

int main()
{
    // int choice;
    // printf("enter choice:");
    // scanf("%d,&choice");

    *create_node(5);
    *create_node(78);
    *create_node(23);
    // switch(choice)
    // {
    //     case 1: *create_node(); break;
    //     case 2: insert_data();  break;
    //     case 3: inorder();      break;
    //     default: printf("Invalid input");
    // }
    return 0;
}
struct node *create_node(int data)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;

}

void insert_data(int data)
{
    struct node *newnode = create_node(data);
    if(root==NULL)
    {
        root=newnode;
        return;
    }
    else
    {
        struct node *current = root;
        struct node *parent = NULL;
        while (1)
        {
            parent=current;
            if(data < current->data)
            {
                current=current->left;
            }
            else if (data>current->data) 
            {
              current=current->right;
              if(current==NULL)
              {
                parent->right = newnode;
              } 
            }   

            else if (current=NULL)
            {
                parent->left=newnode;
            }
            return;
        }
    }
}

void inorder(struct node *node)
{
if (root == NULL)
{
    printf("tree is empty");
    return;
}
else
{
    if(node->left!=NULL)
    {
        inorder(node->left);
        printf("%d",node->data);
    }
    if (node->right=NULL)
    {
        inorder(node->right);
    }
}
}
