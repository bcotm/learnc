#include <stdio.h>

#define MAXLINE 1000

int main()
{
    int c, i;
    char s[MAXLINE];

    for(i = 0; i < MAXLINE - 1;i++)
    {
        if((c = getchar()) == EOF)
            break;
        if(c == '\n')
            break;
        s[i] = c;
    }


    return 0;
}
