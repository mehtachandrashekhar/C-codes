
#include <stdio.h>

int main() {
   
    int i,j;
    int a[2][3]={(1,1),(2)};
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    if(j==4)
        {
            printf("\n");
        }
    
    
    return 0;
}