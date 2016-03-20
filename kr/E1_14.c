#include <stdio.h>

#define ALPHA 52

int main()
{
    int c, i, x, y;
    int nums[ALPHA];
    int max;

    max = 0;
    for(i = 0; i < ALPHA; i++)
        nums[i] = 0;

    while((c = getchar()) != EOF)
    {
        if(c >= 'a' && c <= 'z')
            nums[c - 'a']++;
        if(c >= 'A' && c <= 'Z')
            nums[26 + c - 'A']++;
    }
    for(i = 0; i < ALPHA; i++)
    {
        if(nums[i] > max)
            max = nums[i];
    }
    for(y = max; y > 0; y--)
    {
        for(x = 0; x < ALPHA; x++)
           {
               if( (y - nums[x]) <= 0 )
                putchar('O');
               else
                putchar(' ');
           }
        putchar('\n');
    }
    printf("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
}
