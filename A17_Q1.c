//Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    int count=0;
    char str[10]={'R','O','H','I','T','R','O','Y'};
    for(int i=0;str[i];i++)
        count++;
        printf("Length of string is %d",count);
    return 0;
}
