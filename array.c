#include<stdio.h>

int main()
{
   int no1=10;
   int no2=20;

   int arr[4]={10,20,30,40};


   printf("the value of no1 is %d\n",no1);
   printf("the address od no1 is %d\n",&no1);
   printf("the sizwof no1 is %d\n",sizeof(no1));


   printf("the value of first element is %d\n",arr[0]);
   printf("the addres of arry is %d\n",arr);
   printf("the sizeof arry is %d\n",sizeof(arr));

   //printf("the value of first element is %d\n",arr[0]);


   printf("the addres of second element of arry is %d\n",&arr[2]);





    return 0;

}