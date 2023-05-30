#include <stdio.h>
#include <stdbool.h>

/*
  The program that checks whether the letter entered from
  the keyboard is a vowel or not
*/

int main(int argc, char const *argv[])
{   
    bool control = false;
    char letter;
    char vowels[] = {'a','e','i','o','u'};

    

    printf("Enter a letter: ");
    scanf("%c",&letter);

    for (int i = 0; i < 5; i++)
    {
        if (letter == vowels[i])
        {
            control = true;
            break;
        } 
    }
    
    if (control == true)
        printf("This letter is vowel.");
    else
        printf("This letter isn't vowel.");
    
    
    return 0;
}
