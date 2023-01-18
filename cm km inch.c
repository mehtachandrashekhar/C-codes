#include<stdio.h>
 void main()
 {
     float distance;
     float m,cm,inch,feet;
     
     printf("Enter the value of distance in km : \n");
     scanf("%f",&distance);
     m = distance*1000;
     cm = distance*100000;
     inch = distance*39370.1;
     feet = distance*3280.84;
     printf("\n In Meters : %f ",m);
     printf("\n In Centimeters : %f",cm);
     printf("\n In Inches : %f",inch);
     printf("\n In feet : %f",feet);
     
     
 }