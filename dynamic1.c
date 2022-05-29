#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&size);

    ptr = (int *)calloc(size , sizeof(int));            // Step 1 : Allocate the memory
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory succesfully allocated\n");
    }
    
    ptr=(int *)realloc(ptr,6*sizeof(int));
    // Step 2: Use the memory
    printf("%d",sizeof(realloc));
    free(ptr);          // Step 3: Free the memory
    return 0;
}






