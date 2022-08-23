//Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i=0;
    char a[]="ROHITROY";
    char b='R';
    while(a[i]!='\0')
{
    i++;
    if(a[i]==b)
    count++;
}
        printf("Occurrence of r is %d",count);
    return 0;
}
