// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    
    int i,length=0;
    char s[20];
    printf("enter the word :");
    gets(s);
    
    for(int i=0;s[i]!=0;i++)
    {
        length++;
    }
    
    printf("%d is the length of string:",length);
    
    return 0;
}