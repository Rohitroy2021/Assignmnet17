//Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#include<string.h>
int main(){
    int count=0;
char str[10],c;
printf("Enter a string");
gets(str);
for(c='a';c<='z';c++)
{
    count=0;
    for(int i=0;str[i]!=NULL;i++)
    {
    if(c==str[i])
    count++;
    }
    if(count>0)
printf("%C is repeated %d times\n",c,count);
}
}
