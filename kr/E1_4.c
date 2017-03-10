#include <stdio.h>

int get_fahr(float*);
void print_ce(float);

int main()
{
    float vfahr;
    float *fahr=&vfahr;
    while(get_fahr(fahr)){
	print_ce(vfahr);
    }
//    while(printf("Please input the fahr:") && scanf("%f", &fahr))
//    {
//        printf("The celsius is %6.2f\n", (5.0/9.0)*(fahr-32.0));
//    }
    return 0;
}

int get_fahr(float *fahr){
    printf("Another version ,fahr:");
    return scanf("%f", fahr);
}

void print_ce(float fahr){
    printf("The celsius is %6.2f\n", (5.0/9.0)*(fahr-32.0));
}
