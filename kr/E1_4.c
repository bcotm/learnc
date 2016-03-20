#include <stdio.h>

int main()
{
    float fahr;

    while(printf("Please input the fahr:") && scanf("%f", &fahr))
    {
        printf("The celsius is %6.2f\n", (5.0/9.0)*(fahr-32.0));
    }
    return 0;
}
