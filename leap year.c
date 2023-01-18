#include<stdio.h>
int  main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("year is leap year");
   }
    else {
        printf("not a leap year");
    }

    return 0;
}