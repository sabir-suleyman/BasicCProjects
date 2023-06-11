#include<stdio.h>
#include<string.h>

int main()
{

char x[10] ="Sabir"; 
char y[10] ="Nezrin"; 

printf("x = %s\n",x);
printf("y = %s\n\n\n",y);

char temp[10] ;

strcpy(temp,x);
strcpy(x,y);
strcpy(y,temp);


printf("x = %s\n",x);
printf("y = %s\n",y);

  return 0;
}
