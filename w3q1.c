//Write a C program to remove a specific character from a string.
#include<stdio.h>
#include<string.h>
void main()
{
    char c, str[50];
    int i,l;
    printf("enter a string:");
    scanf("%s",&str);
    printf("enter the character you want to remove:");
    scanf("%c",&c);
    l=strlen(str);
    for(i=0;i<l;i++);
    {
        if(str[i]!=c)
        {
            printf("%c",str);
        }
    }
}