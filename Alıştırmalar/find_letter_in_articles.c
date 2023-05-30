#include <stdio.h>

// Girilen yazida istediginiz karakterden kac tane oldugunu bulan program  

int main()
{
    char article[100];
    char letter ;
    int counter = 0;

    printf("Please enter your article: ");
    scanf(" %s",&article);


    
    printf("Please enter a letter for finding number of in article: ");
    scanf(" %c",&letter);

    for (int i = 0; i < 100 ; i++)
    {
        if (article[i] == letter){
            counter++;
        }
    }
    
    printf("\nThe number of %c in this article is %d.", letter ,counter);
    
   
    return 0;
}
