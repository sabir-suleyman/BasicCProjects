#include <stdio.h>
 
// String karakterlerini sayan fonksiyon

void number_of_char(char *nameptr) 
{ 
    int count = 0;

    while (1)
    {
        if (nameptr[count] == '\0')
        {
           break;
        }
        count++;
    }
   
    printf("The number of character is: %d",count);
}


int main()
{
    char name[] = "HelloWorld";
    
    number_of_char(name);

    return 0;
}
