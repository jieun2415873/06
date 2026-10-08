#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b)
{
    int result;

    result = a+b;
    return result;
}

int square (int n)
{
    return n*n;
}

int get_max (int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main (void)
{
    printf("sumTwo result : %i\n", sumTwo(2, 5));
    printf("square result : %i\n", square(10));
    printf("get_max result : %i\n", get_max(3,4));
    
    return 0;
}
