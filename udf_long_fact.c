#include <stdio.h>

long fact (int n)
{
    long fact=1;
    int i;
    for (int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main() {
    long factorial;
    int n;
    printf("Enter the no to find factorial:");
    scanf("%d",&n);
    factorial = fact(n);
    printf("The factorial of %d is %llu",n,factorial);
    return 0;
}

    