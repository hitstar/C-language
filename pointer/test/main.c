#include <stdio.h>
#include <stdlib.h>
#define SIZE 80
int main(void)
{
    char flower[SIZE];
    char addr[] = "s smell like the old shoes";
    puts("what's is your favorite flowers?");
    gets(flower);
    strcat(flower, addr);
    puts(flower);
    puts(addr);

    return 0;
}
