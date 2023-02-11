#include<stdio.h>
#include<stdlib.h>

int main()
{
    int data,n,i,mid,left,right,array[100];
    

    printf("\nEnter the size of array :");
    scanf("%d",&n);

    printf("Enter the data valued in ascending order :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }



printf("\nEnter the data to be searched:");
scanf("%d",&data);

left =0;
right = n-1;


while(left<=right)
{
    mid = (left+right)/2;
    
    if(array[mid]==data)
    {
        printf("%d found at location  %d",data,mid+1);
        break;
    }
    if(data<array[mid])
    {
        right=mid-1;
    }
    if(data>array[mid])
    {
        left = mid+1;
    }
    if(left>right)
    {
        printf("data not found");
        break;
    }
    
}

}