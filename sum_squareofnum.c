#include<stdio.h>
int main()
{
    int i,n,sum;
    sum=0;
    printf("Enter the last of series to add :");
    scanf("%d",&n);
    sum = (n* (n+1)*( 2 * n+1)) /6;
     for (i=1;i<=n;i++)
     { 
         if (i != n)
		             printf("%d^2 +",i); else
		             printf("%d^2 = %d\n ",i,sum);
     }
     printf("The sum of series is  %d.",sum);
    return 0;
  
     
}
    
    

             
    
