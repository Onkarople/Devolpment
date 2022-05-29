#include<stdio.h>
#pragma pack(1)

struct demo
{
    int i;
    char ch;
    int j;
    float f;
    char c;

};

int main()
{



    printf("%d",sizeof(struct demo));
    return 0;

}