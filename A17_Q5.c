//Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string ");
    gets(str);
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("%s",str);

}
