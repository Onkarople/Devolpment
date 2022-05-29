#include<stdio.h>
struct demo
{
    const int i;
    const int j;

};

int main()
{
    struct demo obj={11,21};

    printf("%d",obj.i);


    return 0;


}