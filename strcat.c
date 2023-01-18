#include <stdio.h>
#include<string.h>

int main()
{
    char a[10]="hello ";
    char b[10]="moto ";
    char c[20]="how are you?";
    strcat(strcat(a,b),c);
    printf("%s",a);
    
    return 0;
}
