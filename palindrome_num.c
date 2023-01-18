//Armstrong_num_program_cube= num

#include<stdio.h>
int main() {
int n,r,sum=0,temp;

printf("enter the number:");
scanf("%d",&n);
temp = n;
while(n>0)
{
    r=n%10;
    sum = (sum*10)+r;
    n = n/10;
    
    
}
if (temp == sum)
{
printf("congratulations : entered no is palindrome");
}
else 
{
printf("galat hai ghar jao tata bye bye :)");
}
return 0;
}