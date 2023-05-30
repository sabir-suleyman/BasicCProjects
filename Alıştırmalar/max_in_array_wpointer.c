#include <stdio.h>

/* Pointer yardimiyla dizinin en buyuk elemaninin bulunmasi */

int find_max(int *arrayp,int size) 
{
  int max;
  max = *arrayp;
  for (int i = 1; i < size; i++)
  {
      if (*(arrayp+i) > max)
      {
          max = *(arrayp+i);
      }
  }
  
  return max;
}

int main()
{
    int n;
    printf("Please anter the size of array: ");
    scanf("%d",&n);
    int array1[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth number of array: ",(i+1));
        scanf("%d",&array1[i]);
    }
    
    printf("\nThe maximum of array is: %d",find_max(&array1[0],n));
    
    return 0;
}
