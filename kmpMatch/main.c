#include<stdlib.h>
#include<stdio.h>


void get_next(char *t, int *next)
{
    int i = 1, j = 0, len = strlen(t);
    next[j] = 0;
    next[i] = 1;
    for(i=1; i< len; i++)
    {
        if(j == 0 || t[i] == t[j])
        {
            i++;
            j++;
            next[i] = j;
        }
        else
            j = next[j];
    }
}

int index_kmp(char *s, char *t, int pos)
{
    int i= pos;
    int j = 1;

    int nextj[255];

    get_next(t, nextj);
    while(i <= strlen(s) && j <= strlen(t))
    {
        if(j == 0 || s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            j = nextj[j];
        }
    }
    if(j > strlen(t))
        return i - strlen(t);
    else
        return 0;
}

int main()
{
    char *source = "abababaaaaababa";
    char *target = "aaba";
    int index;
    index = index_kmp(source, target, 2);
    printf("hh%d", index);
    return 0;
}
