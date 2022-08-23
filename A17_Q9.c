//Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    int r,i,round;
    char str[5][10],str2[10];
    printf("Enter 4 strings");
    for(i=0;i<=4;i++)
    gets(str[i]);
    for(round=1;round<=4;round++)
    {
        for(i=0;i<=4-round;i++)
        {
    r=strcmp(str[i],str[i+1]);
    if(r>0)
        {
    strcpy(str2,str[i]);
    strcpy(str[i],str[i+1]);
    strcpy(str[i+1],str2);

}
    }
    }
    for(i=0;i<4;i++)
        puts(str[i]);
}
