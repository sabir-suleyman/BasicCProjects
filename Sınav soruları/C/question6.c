#include<stdio.h>

// Integer dizisini sirala Orn. int array[] = {-1, -5, 7, 100, 9, 11, -6, 27, 3};

void sorting_array(int array[], int size) 
{
     int temp;

     // BUBLE SORT
     for (int i = 0; i < size-1; i++)
     {
        for (int j = 0; j < size-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
     }
 
    printf("Sorted array: ");
    
    for (int k = 0; k < size; k++)
    {
        printf("%d, ",array[k]);
    }
    
}

int main()
{
    int array[9] = {-1, -5, 7, 100, 9, 11, -6, 27, 3};

    sorting_array(array,9);
    return 0;
}
