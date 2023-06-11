#include<stdio.h>


int main()
{
    char a = 'A';

    short a1 = 1;
    
    int b1 = 21;
    
    double c1 = 2.31;
  
    float d1 = 2.3132434;
    
    printf("%d bytes and adress are: %p\n",sizeof(a),&a);
    printf("%d bytes and adress are: %p\n",sizeof(a1),&a1);
    printf("%d bytes and adress are: %p\n",sizeof(b1),&b1);
    printf("%d bytes and adress are: %p\n",sizeof(c1),&c1);
    printf("%d bytes and adress are: %p\n",sizeof(d1),&d1);

    return 0;
}
