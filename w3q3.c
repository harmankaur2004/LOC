a//Write a C program to add two numbers using pointers.
#include<stdio.h>
void main()
{
    int a,b,*x,*y;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    int sum=*x+*y;
    printf("%d+%d=%d\n",a,b,sum);
}