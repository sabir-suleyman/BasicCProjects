#include<stdio.h>
#include<string.h>


int main()
{
    char cars[][10] = {"Mustang","Corvette","Camaro"};

    printf("%s\n",cars[0]);

    strcpy(cars[0],"Tesla");

    printf("%s\n\n\n",cars[0]);

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }
    
    return 0;
}
