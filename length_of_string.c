#include<stdio.h>

int main()
{
    char name[10]; // a,b,c,d,e,f,g,h,i,j,\0
    int i,length;
    i=0;
    length=0;
    printf("Enter your name\n");
    
    //get string input. Note that We are not using &name here.   
    gets(name);
    
    //abc name[0]=a, name[1]=b name[2]=c 
    while(name[i]!='\0')
    {
        length=length+1;
        i=i+1;
    }
    printf("length of string is %d\n",length);
    
    return 0;
}