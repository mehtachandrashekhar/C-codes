#include<stdio.h>

int main()
{
    int num1,num2,selection;
    float result;
    char ch;    //to store operator choice
     
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
     
    printf("Choose operation to perform (1,2,3,4,5):");
    scanf("%d",&selection);
     
    result=0;
    switch(selection)    
    {
        case 1:
            result=num1+num2;
            break;
             
        case 2:
            result=num1-num2;
            break;
         
        case 3:
            result=num1*num2;
            break;
             
        case 4:
            result=(float)num1/(float)num2;
            break;
             
        case 5:
            result=num1%num2;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d  %d = %f\n",num1,num2,result);
    return 0;
}