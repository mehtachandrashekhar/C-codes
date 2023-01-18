#include<stdio.h>
int main()
{
    int i,j,length,len;
    char name[10];
    i=0;
    j=0;
    len=0;
    length=0;
    printf("enter your name :");
    gets(name);
    //length = null value tak.
     
     while(name[i]!='\0')
     {
         i++;
         length+=1;
         
     }
    printf("length of string is %d\n\n",length);
    
    printf("reverse order\n");
    
    len=length-1;
for (j=len;j>=0;j--){
    printf("%c\n",name[j]);
}
printf("length of reverse is %d",len);
}