#include<stdio.h>
#define SIZE 80

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes!";

    puts("what's your favorite flower?") ;
    gets(flower) ;
    strcat(flower, addon) ;

    puts(flower) ;
    puts(addon);
    return 0;
}
