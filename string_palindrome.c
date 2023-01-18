#include<stdio.h>
#include<string.h>

 int main ()
 {
    int i,j,len=0,flag=0;
    char s[10];
    printf("entr the word :");
    gets(s);
    
    len = strlen(s);
    
    for (i=0;i<len/2;i++)
 {
     if (s[i] == s[strlen(s)-i-1])
     {
         flag =1;
     }
     else 
     {
         flag = 0;
     }
     if (flag == 1)
     {
        printf("it is a palindrome");
        break;
    }
    
    if (flag == 0)
    {
        printf("not a palindrome");
    }
        
}
    
    
    
    return 0;
 }