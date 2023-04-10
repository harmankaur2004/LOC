//Write a C program to enter the radius of a circle and find its diameter circumference and area.
#include<stdio.h>
#define pi 3.14
void main()
{
    float r,d;
    float peri,ar;
    printf("enter radius of circle");
    scanf("%f",&r);
    d=2*r;
    printf("diameter of the circle is %f\n",d);
    peri=2*pi*r;
    printf("circumference of circle is %f\n",peri);
    ar=pi*r*r;
    printf("area of circle is %f\n",ar);
}