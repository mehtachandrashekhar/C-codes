#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    ptr = (int*)malloc(n* sizeof(int));
    printf("Enter the values :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("The stored values are : ");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",*(ptr+i));
    }
    
    // deallocating the memory
    free(ptr);
    return 0;
}