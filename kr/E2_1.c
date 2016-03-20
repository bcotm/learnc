#include <stdio.h>

/*
 <limits.h> has defined the limits ,SCHAR_MIN,SCHAR_MIX...if('\x80')...
*/

int main()
{
    char c, max;
    int i;

    c = max = 0;
    while(1)
    {
        if(++c>max)
            max = c;
        if(max != c)
            break;
    }
    printf("%d", max);
}
