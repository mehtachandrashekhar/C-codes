#include<stdio.h>

void main () {

 int a,b;
 int sum,subtraction,multiplication;
 float division,modulo;
 printf("enter the value of a\n");
 scanf("%d",&a);
 printf("enter the value of b\n");
 scanf("%d",&b);
 
 sum = a+b;
 printf("Sum = %d\n",sum);
 subtraction = a-b;
 printf("subtraction is %d\n",subtraction);
 multiplication=a*b;
 printf("multiplication is %d\n",multiplication);
 division = a/b;
 printf("division is %f\n",division);
 modulo = a%b;
 printf("modulo = %f\n",modulo);
 


}


