//quick sort
#include<stdio.h>
#include<stdlib.h>

void  quick_sort(int[10],int,int);
int partiotion(int[10],int,int);

int main(){
     int x[20],n,i;

     printf("\nEnter the size of array :");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
        scanf("%d",&x[i]);
     }

     

    return 0;
}