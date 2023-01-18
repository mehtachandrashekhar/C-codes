// Online C compiler to run C program online
#include <stdio.h>
int get_int();

int get_int ()
{
    int n;
    printf("enter the value of a :");
    scanf("%d",&n);
    return n;
}

int main () 
{
    int i,a,n,flag = 0;
    
   // printf("enter the positive integer :");
   // scanf("%d",&n);
    n = get_int();
    
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