#include<stdio.h>

//int reverse_digit(int num)

int main()
{
    int num;
    printf("enter the digit to be reversed : \n");
    scanf("%d",&num);
    printf("reverse of no is %d", reverse_digit(num));
   // getchar();
    return 0;
}

int reverse_digit( int num)
{
    int rev_num = 0;
    while( num > 0) 
    {
    rev_num = rev_num*10 + num%10;
    num = num/10;
    
    }
return rev_num;
}


another way ...
#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("enter the integer :");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }
    printf("reversed number = %d",rev);
    return 0;
}