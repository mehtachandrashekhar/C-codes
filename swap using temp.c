#include<stdio.h>

void main() 
{
    int a,b,temp;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b :\n ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf(" the value of A is: %d and B is: %d",a,b);
    
}