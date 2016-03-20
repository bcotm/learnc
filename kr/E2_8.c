#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main(void)
{
    unsigned x;
    int n;

    x = 0xa;
    n = 2;
    printf("After rightrot(%d,%d):\n%08x->%08x", x, n, x, rightrot(x,n));

    return 0;
}

unsigned rightrot(unsigned x, int n)
{
    while(n-- > 0)
    {
        if(x & 1)
            x = (x >> 1) | ~(~0U >> 1);
        else
            x = x >> 1;
    }
    return x;
}
