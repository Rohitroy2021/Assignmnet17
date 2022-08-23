//Write a program in C to copy one string to another string.
/*#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    int count=0;
    char str[20],str2[20];
    printf("Enter a string ");
    gets(str);
    for(int i=0;str[i];i++)
    {
        str2[i]=str[2];
    }
    str2[i]='\0';
    printf("%s",str2);
}*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str2[20];
    printf("Enter a string ");
    gets(str);
    mem                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           cpy(str2,str,strlen(str));
    printf("%s",str2);
}
