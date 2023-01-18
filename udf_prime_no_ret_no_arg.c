// Online C compiler to run C program online
#include <stdio.h>
void check_prime();

int main ()
{
    check_prime();
    return 0;
}

void check_prime() 
{
    int i,n,flag = 0;
    
    printf("enter the positive integer :");
    scanf("%d",&n);
    
    for(int i=2; i<=n/2;i++)
    {
        if (n%2 == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("not a number is prime");
    else 
        printf("prime");
    
}