//Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include<stdio.h>
int main()
{
    int count=0;
    char str[20];
    printf("Enter a string ");
    gets(str);
    for(int i=0;str[i];i++)
    {
        count++;
    }
    printf("%d",count);
}
