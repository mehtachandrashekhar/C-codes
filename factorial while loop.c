#include<stdio.h>
int main()
{
    int number;
    long long factorial;
    printf("enter an integer :");
    scanf("%d",&number);
    factorial = 1;
    while (number>0)
    
    {
        factorial = factorial*number;    
        number--;    
    }
    printf("factorial = %lld",factorial);
    return 0;
}