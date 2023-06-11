#include<stdio.h>


// Dizinin en kucuk degerini bulup yazan program 

void min_element(int array[],int size)  
{
    int min = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] <= min)
        {
            min = array[i];
        }
        
    }
    
    printf("The minimum element of this array is: %d\n",min);
}


int main()
{
    int array[8] = {-1, -5, 7, 100, 9, -6, 27, 3};

   min_element(array,8);

    
    return 0;
}
