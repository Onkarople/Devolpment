#include<stdio.h>

extern int add();

int main()
{
  int a=10,b=20;
  int c=0;

  c=add(a,b);

  printf("%d",c);

    return 0;
}