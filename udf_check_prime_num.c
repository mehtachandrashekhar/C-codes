#include<stdio.h>
int prime_num(int n);


int main ()
{
    int n,flag;
    printf("Enter the num :");
    scanf("%d",&n);
    flag  = prime_num(n);
    
     if (flag ==1)
        printf("Number is prime number");
        else
        printf("No is not prime");
        return 0;
}

int prime_num(int n)
{

    if (n%2 ==0)
    {
        return 1;
    }
    return 0;
}