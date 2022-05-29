#include<stdio.h>

int main()
{
    auto int iMarks = 0;

    printf("Enter your marks\n");
    scanf("%d",&iMarks);

    printf("Your entered marks : %d\n",iMarks);

    if(iMarks >= 60)
    {
        printf("First class\n");
    }
    else
    {
        printf("Not a first class\n");
    }

    return 0;
}