#include<stdio.h>

int main()
{
    char name[10];
 
    printf("Enter your name\n");
    
    //get string input. Note that We are not using &name here.   
    gets(name);
    
    //print the name
    puts(name);
    
    return 0;
}