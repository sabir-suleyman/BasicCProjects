#include<stdio.h>

void sort (int array1[],int size1) 
{
   // Buble sort 
  
 
  int temp;
        
      for(int x = 0; x < size1 - 1; x++){       

        for(int y = 0; y < size1 - x - 1; y++){          

            if(array1[y] > array1[y + 1]){               

                temp = array1[y];

                array1[y] = array1[y + 1];

                array1[y + 1] = temp;

            }

        }

    }

   // Print elements of sorted array

   for (int k = 0; k < size1; k++)
  {
    printf("%d ",array1[k]);
  }
  

}

/*
  for (int i = 0; i < size1; i++)
  {
    
       for (int j = i; j < size1-1; j++)                Wrong!!!
       {
        if (array1[j+1]<array1[j])
        {
            temp = array1[j+1];
            array1[j+1] = array1[j];
            array1[j] = temp;
        }
    
       }
  }

*/

int main()
{
    int array[] = {-1,-5,7,100,9,11,-6,27, 3};
    //

/*
    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter %d. element:",(i+1));
        scanf("%d",&array[i]);
    }
  */  
   // int size = sizeof(array)/sizeof(array[1]);

    sort(array,9);
    return 0;
}
