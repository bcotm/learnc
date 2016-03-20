#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);
unsigned inverta(unsigned x, int p, int n);

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
    printf("After setbits(%d,%d,%d,%d):\n%04x\n", x, p, n, y, getbits(setbits(x,p,n,y),p,n));
    printf("After invert(%d,%d,%d):\n%04x\n",x,p,n,getbits(invert(x,p,n),p,n));
    printf("After inverta(%d,%d,%d):\n%04x\n",x,p,n,getbits(inverta(x,p,n),p,n));

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

unsigned invert(unsigned x, int p, int n)
{
    return (x & ~(~(~0 << n) << (p + 1 - n))) | ~(x & ~(~0 << n) << (p+1-n));
}

unsigned inverta(unsigned x, int p, int n)
{
    // 000001111100000
    unsigned mask = ~(~0U << n) << (p + 1 - n);

    // xxxxx^^^^^xxxxx
    return x ^ mask;
}
