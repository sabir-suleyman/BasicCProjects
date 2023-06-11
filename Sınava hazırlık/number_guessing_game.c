#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main()
{
    srand(time(0));
    int num = (rand()%100)+1;
    printf("%d\n\n",num);

    int input;
   


    while (1)
    {
        printf("\n\nPlease enter an number:");
        scanf("%d",&input);

        if (input == num)
        {
            printf("\nCongiruliations! you found guessing number!");
            break;
    
        } else if(num>input){

            printf("\nToo Low");

        } else if(num<input){

            printf("\nToo Upper");
        
        }
    }
    
    
    return 0;
}
