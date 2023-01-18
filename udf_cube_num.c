// Online C compiler to run C program online
#include <stdio.h>
int cube_num(int n);

int main()
{
int n,cube;
printf("Enter the Value :");
scanf("%d",&n);
cube = cube_num(n);
printf("The cube of %d is %d ",n,cube);
return 0;
}

int cube_num(int n)
{
    int cube ;
    cube = n*n*n;
    return cube;
}
