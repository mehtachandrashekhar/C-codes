#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;;
    float avg;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers to add:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum +arr[i];
    }
    avg = sum/n;
    printf("Average is %.2lf",avg);

}