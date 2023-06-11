#include <stdio.h>
#include <stdlib.h>


int main()
{

    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    int *ptr;
    ptr =  malloc(sizeof(int)*size);


    // Input elements of array

    for (int i = 0; i < size; i++)
    {
        printf("\nPlease enter %dth element of array: ",i+1);
        scanf("%d",&ptr[i]);
    }
    
    // print elements of array

    for (int i = 0; i < size; i++)
    {
        printf("\n%dth element of array is %d\n",i+1,ptr[i]);
    }

    free(ptr);

    return 0;
    
}
