#include<stdio.h>

int main()
{
  int no=11;

  int *p =&no;

  int **q=&p;

  int ***a=&q;

  int ****b=&a;

  int *****c=&b;

  int ******d=&c;

  int *******e=&d;

  int ********f=&e;

  int *********g=&f;




  printf("%d\n",no);
  printf("address of no %d\n",&no);
  printf("size of no is%d\n",sizeof(no));
  printf("%d\n",*p);
  printf("%d\n",p);
  printf("address of p %d\n",&p);
  printf("size of p is%d\n",sizeof(p));
  printf("addres of q %d\n",&q);
  printf("%d\n",***a);
  printf("%d\n",sizeof(c));
  printf("%d\n",&d);
  printf("%d\n",**g);



    return 0;
}