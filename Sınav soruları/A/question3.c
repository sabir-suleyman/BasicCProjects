#include<stdio.h>
#include<stdlib.h>

// Malloc ile 3.14 degeri
int main()
{
    float *number = malloc(sizeof(float)*5);
    *number = 3.14;
    free(number);
    
    return 0;
}
