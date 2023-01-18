// Online C compiler to run C program online
#include <stdio.h>

int addnum(int a,int b); //prototype
int subtract_num(int a, int b);

int main ()
{
    int a,b,sum,subtraction,modulo,multiply,division;
    printf("Enter the value of a :");
    scanf("%d",&a);
    
    printf("Enter the value of b :");
    scanf("%d",&b);
    sum = addnum(a,b);
    subtraction = subtract_num(a,b);
    division = divide_num(a,b);
    multiply = multiplication_num(a,b);
    modulo = modulo_num(a,b);
    
    printf("The sum is %d.\n",sum);
    printf("The subtraction is %d.\n ",subtraction);
    printf("The div is %d.\n",division);
    printf("The multi is %d.\n",multiply);
    printf("The modulo is %d.\n",modulo);
    return 0;
}
int addnum(int a,int b)
{
    int result=0;
    result = a+b;
    return result;
}

int subtract_num(int a,int b)
{
    int subtract;
    subtract = a-b;
    return subtract;
} 

int divide_num(int a,int b)
{
    float divide;
    divide = a/b;
    return divide;
}
int modulo_num(int a,int b)
{
    int modulo;
    modulo = a%b;
    return modulo;
}
int multiplication_num(int a,int b)
{
    int multi;
    multi = a*b;
    return multi;
}