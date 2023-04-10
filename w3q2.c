//Write a C program to count the frequency of each character of the string.
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],c;
    int i,j,l,count=0;
    printf("enter a string:");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        c=s[i];
        count=1;
        for(j=i+1;j<l;j++)
        {
            if(s[j]==s[i])
            {
                count++;
                 
            }
             
        }
        printf("%c is repeated %d times\n",c,count);
    }
     
}