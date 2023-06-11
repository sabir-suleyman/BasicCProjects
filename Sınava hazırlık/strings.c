#include<stdio.h>
#include<string.h>

int main()
{
    char name[23];

    printf("What's your name? : ");
    scanf("%s",&name);
    fgets(name,23,stdin);   // This function prevents to interrupt your input process while you tap space button
    
    name[strlen(name)-1] = '\0';
    printf("Hi %s What's up?",name);

    return 0;
}
