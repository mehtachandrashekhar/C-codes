//printing fibonacci series
#include<stdio.h>
int main()
{
    int i,n1,n2,n3,n,sum;
    n1=0;
    n2=1;
    
    printf("enter the last number which you have to add :\n");
    scanf("%d",&n);
      printf("%d\b",n1);
     printf("%d\b",n2);
   
    for(i=2;i<=n;i++)
    {
         n3=n1+n2;
         printf("%d\b",n3);
          n1=n2;
          n2=n3;
    }
    
  
    return 0;
    
    
    
}