#include<stdio.h>

int main()
{
    float value=3.14;
    float *p=&value;
    float **q=&p;
    float ans=*p+**q;


    printf("%d\n",&value);
    printf("%f\n",ans);
    printf("%d\n",p);

    return 0;

}