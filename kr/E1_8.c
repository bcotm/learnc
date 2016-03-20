#include <stdio.h>

int main()
{
    long nc = 0;
    long bc = 0;
    long tc = 0;
    int c;

    for(; (c = getchar()) != EOF;)
    {
        if(c == '\n') ++nc;
        if(c == '\t') ++tc;
        if(c == ' ') ++bc;
    }
    printf("There are %ld newlines.\nThere are %ld blanks.\nThere are %ld tabs.\n ",nc, bc, tc);
    return 0;
}

