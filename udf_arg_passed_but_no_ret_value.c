// udf_arg_passed_but_no_ret_value
#include <stdio.h>

void check_prime(int n);// prototype

int main ()//func logic
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    check_prime(n);
    return 0;
    
}

void check_prime (int n) // main func
{
    int i,flag = 0;

      for(int i=2; i<=n/2;i++)
    {
        if (n%i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("not a number is prime");
    else 
        printf("prime");
    
}