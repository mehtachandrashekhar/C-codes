// Bubble Sorting

#include<stdio.h>
#include<stdlib.h>

int main(){

    int arr[100];
    int i,j,n,temp;

    printf("\nEnter the size of array :");
    scanf("%d",&n);
    printf("\nEnter the data Values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    // sorting
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nSorted List in ascending order :");
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }

    return 0;
}