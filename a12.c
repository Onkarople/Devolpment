#include<stdio.h>

int main()
{
    int i=4;
    float arr[]={10.3,43.4,45.34,234.45};
    float *p=NULL;
    float *q=NULL;


    p=arr;
    q=&(arr[3]);

    printf("%d\n",p);
    printf("%d\n",q);
    printf("%f\n",*(p+2));
    printf("%f\n",p[1]);
    printf("%f\n",*(2+arr));
    printf("%d\n",q-p);
    printf("%f\n",*(q-2));
    printf("%d\n",arr[i]);

    return 0;

}