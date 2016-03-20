#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void)
{
    unsigned x, y;
    int p, n;

    x = 0x1af;
    y = 0xfca;
    p = 12;
    n = 4;

    printf("The %d bits of x = %d begins at %d is : %04x\n", n, x, p, getbits(x,p,n));
    printf("The %d bits of y = %d begins at %d is : %04x\n", n, y, p, getbits(y,p,n));
    printf("After setbits(%d,%d,%d,%d):\n%04x", x, p, n, y, getbits(setbits(x,p,n,y),p,n));

    return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    /* xxxxx0000xxxx | 00000yyyy0000*/
    return (x & ~(~(~0 << n) << (p + 1 - n))) | (y & ~(~0 << n) << (p+1-n));
}
