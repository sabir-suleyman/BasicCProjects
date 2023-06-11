#include <stdio.h>


int main()
{      
      int arr[10] = {9,1,8,2,6,4,5,3,7,10};

      int temp;
      int num = sizeof(arr)/sizeof(arr[0]);

      for(int x = 0; x < num - 1; x++){       

        for(int y = 0; y < num - x - 1; y++){          

            if(arr[y] > arr[y + 1]){               

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;

            }

        }

    }

    printf("Array after implementing bubble sort: ");

    for(int x = 0; x < num; x++){

        printf("%d  ", arr[x]);

    }
    return 0;
}
