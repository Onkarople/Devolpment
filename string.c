#include<stdio.h>

int main()
{
    char ch[]={'a','b','c','d','\0'};

    char arr[]="abcd";
    char *ptr=ch;
   
    while(*ptr != '\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }


    printf("%s\n",ch);
    printf("%c\n",ch[0]);


    



    return 0;
}