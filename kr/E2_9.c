#include <stdio.h>

int bitcount(unsigned x);

int main(void)
{
    unsigned x = 0111;
    printf("x=%d\nbitcount:%d",x,bitcount(x));
    return 0;
}

int bitcount(unsigned x)
{
    int n = 0;
    while(x!= 0)
    {
        x &= (x - 1);
        n++;
    }
    return n;
}
