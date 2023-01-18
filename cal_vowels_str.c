// calculate vowels in string 
#include <stdio.h>
#include<string.h>

int main() {
    int i,count=0;
    char s[20];
    
    printf("enter the word :");
    gets(s);
    
    for (int i=0;s[i]!='\0';i++)
    {
        if (s[i] == 'a'|| s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')
            count++;
    }
    
    printf("%d vowels are in %s",count,s);
    return 0;
}