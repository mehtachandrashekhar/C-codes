#include<stdio.h>
void main() 
{
    int days;
    float weeks,months,years;
    printf("Enter the number of days\n");
    scanf("%d",&days);
    years = days/365;
    weeks = days/7;
    months = days/30;
    printf("\n Days to years %f  : \n",years);
    printf("\n Days to weeks %f  :\n",weeks);
    printf("\n Days to months %f : ",months);
    
}