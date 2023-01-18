#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    char a[10]="good ";
    char b[10]="god ";
    //char c[20]="how are you?";
    n = strcmp(a,b);
    printf("%d",n);
    
    return 0;
}
