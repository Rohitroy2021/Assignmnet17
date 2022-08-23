//Write a program to reverse a string.
#include<stdio.h>
int main()
{
    int l,i;
    char str[20],temp;
    printf("Enter a string ");
    gets(str);
    for( l=0;str[l];l++);
    for( i=0;i<l/2;i++){
        temp=str[l];
        str[l]=str[l-1-i];
        temp=str[l-1-i];
    }

    printf("%s",str);

}
