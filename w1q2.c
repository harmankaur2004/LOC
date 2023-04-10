//Write a program that takes a number as input and checks whether it is positive, negative or zero.
#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a==0)
    printf("zero\n");
    if(a>0)
    printf("positive\n");
    if(a<0)
    printf("negative\n");
}