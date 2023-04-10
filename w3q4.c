//Write a C program to find the factorial of a number using pointers.
#include<stdio.h>
void main()
{
    int n,*a,f=1;
    printf("enter a number:");
    scanf("%d",&n);
    a=&n;
    for(int i=*a;i>0;i--)
    {
        f=f*i;
    }
    printf("factorial of %d = %d",n,f);
}
