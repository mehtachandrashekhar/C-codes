#include<stdio.h>
int main()
{
    int i,n,sum;
    sum=0;
    printf("enter the odd number up to which we have to add:\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i=i+2)
    {
    sum = sum+i;
    printf("sum of odd numbers is  %d\n",sum);
    }
}