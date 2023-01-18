#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int n1,n2;
    printf("Enter the size of array :");
    scanf("%d",&n1);
    ptr = (int*)malloc(n1*sizeof(int));
    printf("Enter the values :");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("The stored values are : ");
    for(int i=0;i<n1;i++)
    {
        printf("\n%d",*(ptr+i));
    }
    // New array size
    printf("\nEnter the new size of array :");
    scanf("%d",&n2);
    ptr = realloc(ptr,n2);
     printf("\nEnter the values :");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("\nThe stored values are : ");
    for(int i=0;i<n2;i++)
    {
        printf("\n%d",*(ptr+i));
    }
    
    // deallocating the memory
    free(ptr);
    return 0;
}