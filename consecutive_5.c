#include <stdio.h>

int main()
{
    char a[9];
    int i,j,k,res;
    printf("enter number\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='5')
        {
            j=i+1;
            k=i+2;
            //j=i+1;
            if(a[j]=='5' && a[k]=='5')
            {
               res=1;
               
               
    }
        }
    }
    if(res==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}