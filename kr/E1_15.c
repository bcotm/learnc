#include <stdio.h>

float fahrToCel(float fahr);

int main()
{
    float f;
    while(scanf("%f", &f))
    {
        printf("After conversion, cels is :%6.1f\n",fahrToCel(f));
    }
    return 0;
}

float fahrToCel(float fahr)
{
    return (5.0/9.0) * (fahr - 32.0);
}
