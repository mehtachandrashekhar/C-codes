#include <stdio.h>

int main() 
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
     if (num>0)
     printf("%d is positive integer");
     else if (num<0)
     printf("%d  is negative integer");
     else
     printf("number is neutral");
    
    return 0;
}