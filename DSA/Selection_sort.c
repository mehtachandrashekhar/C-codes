//Selection Sort
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100];
    int i,j,min,n,temp;

    printf("Enter the size of array :\n");
    scanf("%d",&n);

    printf("Enter the elements of array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min = j;
            }
        }
        if(min!=i)
            {
                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp; 
            }
    }
    printf("Sorted list in ascending order :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}