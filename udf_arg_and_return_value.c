// udf_arg_passed_and_ret_value_passed
#include <stdio.h>

int check_prime(int n);// prototype

int main ()//func logic
{
    int n,flag;
    printf("enter the value of n:");
    scanf("%d",&n);
    flag = check_prime(n);
     if (flag == 1)
        printf("not a number is prime");
    else 
        printf("prime");
    return 0;
    
}

int check_prime (int n) // main func
{
    int i,flag = 0;

      for(int i=2; i<=n/2;i++)
    {
        if (n%i == 0)
        {
            return 1;
        }
    }
   
   return 0;
    
}