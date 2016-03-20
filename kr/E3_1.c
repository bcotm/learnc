#include <stdio.h>

int binsearch(int x, int v[], int n);
int binsearch2(int x, int v[], int n);
/*
    decrease the numbers of statements in loops will increase the efficiency.
*/

int main(void)
{
    int v[10] = {1,3,5,8,13,53,75,77,86,87};
    int x = 3;
    //printf("%d\n",binsearch(x,v,10));
    printf("%d\n",binsearch2(x,v,10));
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(x > v[mid])
            low = mid + 1;
        else if(x < v[mid])
            high = mid -1;
        else
            return mid;
    }
    return -1;
}

int binsearch2(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while(low < high)
    {
        mid = (low + high) / 2;
        if(x >= v[mid])
            low = mid;
        else
            high = mid -1;
    }
    return (x == v[high]? high : -1);
}
