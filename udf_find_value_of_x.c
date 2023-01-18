// Online C compiler to run C program online
#include <stdio.h>


int main() {
    // Write C code here
    int x,result;
    printf("Enter the value of x :");
    scanf("%d",&x);
    result = find_x(x);
    printf("%d",result);
    
    return 0;
}
int find_x(int x)
{
    int func;
    func = 2*x+4;
    return func;
}