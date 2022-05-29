#include<stdio.h>

void Display(int no)
{
   int i=0;
   while (i<=no)
   {
       printf("*\n");
       i++;
   }
   
}
void DisplayR(int no)
{
   static int i=1;
   if (i<=no)
   {
       printf("*\n");
       i++;
       DisplayR(no);
   }
   
}
int main()
{
    int Value=3;
    DisplayR(Value);
    printf("End of main");
    return 0;
}