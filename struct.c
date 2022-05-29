#include<stdio.h>

struct demo
{
    int ino;
    float fvalue;
    int ivaluve;
    
}obj1={10,11.22,30};


int main()
{
    struct demo arr[4];

    arr[0].ino=10;
    arr[0].fvalue=10.20;
    arr[0].ivaluve=30;


    arr[3].ino=20;
    arr[3].ivaluve=13;
    arr[3].fvalue=11.20;

    //struct demo *p = NULL;
    //p=&obj;

    //p->ino=11;
    //p->fvalue=10.20;
   // obj.ino=11;
   // obj.fvalue=10.20;
    //obj.ivaluve=20;


    printf("%d\n",arr[3].ivaluve);

    printf("%d\n",sizeof(arr));
    printf("%d\n",&arr);
}