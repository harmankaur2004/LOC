//Write a program that takes a number as input and prints the sum of its digits using a do-while loop.
#include<stdio.h>
void main()
{
    int a,sum=0,b;
    printf("enter a number");
    scanf("%d",&a);
    do{
        b=a%10;
        sum=sum+b;
        a=a/10;
    }while(a>0);
    printf("sum is %d\n",sum);
}