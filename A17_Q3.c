//Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,i=0;
    char a[]="rohitroy";
    char b[]="AEIOU";
    while(a[i]!='\0')
{
    i++;
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    count++;
}
        printf("vowels  %d",count);
    return 0;
}
