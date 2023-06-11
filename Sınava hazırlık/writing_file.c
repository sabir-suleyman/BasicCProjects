#include<stdio.h>


int main()
{
    FILE *pF = fopen("text.txt","a");

    fprintf(pF,"Sabir Suleymanli 1 sinif Bilgisayar");

    fprintf(pF,"\nNezrin Suleymanli 2 sinif Tip");

    fprintf(pF,"\nNezrin Suleymanli 2 sinif Tip");

    fclose(pF);
   
    if (remove("text.txt") == 0)
    {
        printf("This file was deleted succesfully!");
    } else {
        printf("This file wasn't deleted!");
    }
    
    return 0;
}
