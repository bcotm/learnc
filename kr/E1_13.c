#include <stdio.h>

#define MAX_WORDS_NUM 10
#define IN 1;
#define OUT 0;

int main()
{
    int c, state, i, j ,x ,y;
    int length[MAX_WORDS_NUM], max;

    j = 0;
    state = OUT;
    max = 0;

    for( i = 0; i < MAX_WORDS_NUM; i++)
        length[i] = 0;

    while( (c = getchar()) != EOF)
    {
        if(j > MAX_WORDS_NUM)
            break;

        if(c == ' '||c == '\t'||c == '\n')
        {
            state = OUT;
            j++;
        }
        else if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
        {
            state = IN;
            length[j]++;
        }
        if( length[j] > max )
            max = length[j];
    }
    for( x = 0; x < MAX_WORDS_NUM; x++)
        {
            for( y = 0; y < length[x] ; y++)
                putchar('O');
            putchar('\n');
        }
    for(y = 0; y < max; y++)
    {
        for(x = 0; x < MAX_WORDS_NUM; x++)
        {
            if(y >= (max - length[x]))
                putchar('O');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
