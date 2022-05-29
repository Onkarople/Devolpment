#include<stdio.h>

struct demo
{ 
    int *ip;
    float *fp;

};


int main()
{
    struct demo obj;


    int no=11;
    float f=10.21;


    obj.ip=&no;
    obj.fp=&f;

    printf("%d",*obj.ip);
}