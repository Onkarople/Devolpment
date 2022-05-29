#include<stdio.h>

int main()
{
    int marks=0;

    printf("Enter your marks \n");

    scanf("%d",&marks);

    if(marks>=60)
    {
        printf("fisrst class\n");
    }
    else
    {
        printf("not first class\n");
    }

    return 0;
}