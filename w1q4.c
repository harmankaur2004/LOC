//Write a C program to enter two numbers and perform all arithmetic operations using switch case.
#include<stdio.h>
void main()
{
    float a,b,sum,diff,pro,c=1;
    float quo;
    printf("enter two numbers");
    scanf("%f%f",&a,&b);
    switch(1)
   {
       case 1:
       sum=a+b;
       printf("sum=%f\n",sum);
       case 2:
       diff=a-b;
       printf("difference=%f\n",diff);
       case 3:
       pro=a*b;
       printf("product=%f\n",pro);
       case 4:
       quo=a/b;
       printf("quotient=%f\n",quo);
       break;
       default:
       printf("invalid input");
   } 
}