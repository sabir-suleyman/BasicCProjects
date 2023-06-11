#include<stdio.h>

// float x ve char y degiskenlerini struct ile birlestir ve z yarat

struct values 
{
    float x;
    char y;
};

int main()
{
    struct values z;

    z.x = 3.12;
    z.y = 'C';
}
