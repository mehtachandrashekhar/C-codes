// Online C compiler to run C program online
#include <stdio.h>
int sum(int n);
int main() {
    
    int result=0;
    float avg,n;
    printf("Enter the value of n:");
    scanf("%f",&n);
    result = sum(n);
    avg = result/n;
    
    printf("The sum is %d\n",result);
    printf("The avg is %f\n",avg);
    return 0;
}
int sum(int n)
{
    int i,sum=0;
    for (i=0;i<=n;i++)
    {
        sum = sum+i;
    }
    return sum;
}