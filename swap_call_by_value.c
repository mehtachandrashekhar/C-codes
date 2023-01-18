#include<stdio.h>

void swap(int,int);
int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("\nValue of a and b before swapping is %d & %d",a,b);
    swap(a,b);
    return 0;
}
void swap(int a,int b)
{
int temp;
temp=b;
b=a;
a=temp;
printf("\nValue of a and b is %d & %d",a,b);
}