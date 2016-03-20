#include <stdio.h>

int main()
{
    int c;
    int blank = 0;
    while((c = getchar()) != EOF)
    {
        /*---version 1------
        if(blank == 0)
        {
            if(c == ' ')
            {
                putchar(c);
                blank = 1;
            }
            else putchar(c);
        }
        else
        {
            if (c != ' ')
            {
                putchar(c);
                blank = 0;
            }
        }
        ------version 1-------*/
        if (c == ' ')
        {
            if (blank == 0)
                putchar(c);
            blank = 1;
        }
        else
        {
            putchar(c);
            blank = 0;
        }
    }
    return 0;
}
