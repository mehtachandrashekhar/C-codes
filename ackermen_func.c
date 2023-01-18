#include<stdio.h>
int A(int m, int n);

void main()
{
        int m,n;
        printf("Enter  number1  :: \n");
        scanf("%d",&m);
        printf("Enter  number2  :: \n");
        scanf("%d",&n);
        printf("\nOUTPUT :: %d\n",A(m,n));
}

int A(int m, int n)
{
        if(m==0)
                return n+1;
        else if(n==0)
                return A(m-1,1);
        else
                return A(m-1,A(m,n-1));
}