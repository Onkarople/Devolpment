#include<stdio.h>

int main()
{
    int Arr[6] = {10,20,30};
    int no=2;

    printf("%d\n",Arr[0]);      // 10
    printf("%d\n",Arr[no]);      // 30
    printf("%d\n",Arr[3-1]);         // 30
    printf("%d\n",Arr);        // 100
    //printf("%d\n",&(Arr[0]));       // 100
    printf("%d\n",Arr + 1);     // 104
    printf("%d\n",(&Arr) + 1);  // 120
    printf("%d\n",Arr+3);     // 20
    printf("%d\n",&(Arr[3]));  //4
    printf("%d\n",Arr[4]);
    printf("%d\n",&(Arr[5]));
   // printf("%d\n",*(2+Arr));
    printf("%d\n",2[Arr]);

    return 0;
}









/*



1                    Arr[2];                     30


2                    *(Arr + 2)              *(100 + 2)              *(108)          30


3                   *(2 + Arr)              *(2 + 100)              *(108)          30


4                      2[Arr]                 30


*/







