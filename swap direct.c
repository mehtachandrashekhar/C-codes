#include<stdio.h>

void main()
{
    int a,b;// a=7,b=8
    printf("Enter the value of a :\n");
    scanf("%d",&a);
    printf("Enter the value of b: \n");
    scanf("%d",&b);
    a = a+b;
    b= a-b;
    a= a-b;
    printf("The new value of a is: %d and b is : %d",a,b);
    
    
}