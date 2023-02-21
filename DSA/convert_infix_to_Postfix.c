#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

char infix[MAX],postfix[100];
char stack[MAX]
int top -1;

void inToPostfix();
char pop();
char push();
int precedence(char);
void print();
void isEmpty();
int main()
{
    printf("Enter the infix expression:");
    gets(infix);

    inToPostfix();
    void print();
}

void inToPostfix()
{
    int i,j=0;
    char next,symbol;
    for (i=0;i<strlen(infix);i++)
    {
        symbol = infix[i];
        switch(symbol)
        {
            case '(' :
            push(symbol);
            break;
            case ')' :
            while((next=pop())!= '(')
            {
                postfix[j] = next;
                j++;
            }
            break;
            case '^' :
            case '+' :
            case '-' :
            case '*' :
            case '/' :
                while(!isEmpty[top] && precedence(stack[top]) >= precedence(symbol))
                {
                    postfix[j] = pop();
                }
                push(symbol);
                break;

        }
    }
    
    while (!isEmpty())
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

void precedence(char)
{
    switch(char)
    {
        
    }
}