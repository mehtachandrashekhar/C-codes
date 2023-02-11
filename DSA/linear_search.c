#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,data,array[10];

    printf("\nEnter the array size:");
    scanf("%d",&n);

    printf("\nEnter the data values :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\nEnter the data to be searched:");
    scanf("%d",&data);

    for(i=0;i<n;i++)
    {
        if(array[i]==data)
        {
            printf("\n%d is present at location %d",data,i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("Data not found");
    }
    
}