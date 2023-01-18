#include<stdio.h>    
void printFibonacci(int n)
{    
    static int n1=0,n2=1,n3;    
    if(n>0)
    {    printf("n1=%d\tn2=%d\t",n1,n2);
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d\n ",n3);    
         printFibonacci(n-1);
        // printf("\n");
    }    
}    
int main()
{    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);
    printf("\n");
    printFibonacci(n-2);  
    //printf("\n");
  return 0;  
 }