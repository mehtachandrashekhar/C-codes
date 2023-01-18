#include<stdio.h>
 
 int  main()
 {
     int a,sum;
     a = 0;
     sum=0;
     
     while (a<10)
     {
    a++;
    sum=sum+a; 
        printf("the total is %d\n",sum);
     }
    
   return 0;
     
 }