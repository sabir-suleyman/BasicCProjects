#include<stdio.h>

struct Player
    {
        char name[10];
        char surname[10];
        int score;
    };

int main()
{
    
    struct Player player1;
    struct Player player2;

    printf("\nPlease enter 1st player name: ");
    scanf("%s",player1.name);

    printf("\nPlease enter 1st player surname: ");
    scanf("%s",player1.surname);

    printf("\nPlease enter 1st player score: ");
    scanf("%d",&player1.score);


    printf("\nPlease enter 2nd player name: ");
    scanf("%s",player2.name);

    printf("\nPlease enter 2nd player surname: ");
    scanf("%s",player2.surname);

    printf("\nPlease enter 2nd player score: ");
    scanf("%d",&player2.score);

    printf("\n\n\n");

    printf("%s %s is a first player\n\n", player1.name,player1.surname);
    printf("%s's score is %d\n\n\n",player1.name, player1.score);
    

    printf("%s %s is a second player\n\n", player2.name,player2.surname);
    printf("%s's score is %d\n\n\n",player2.name, player2.score);
    
    return 0;
}
