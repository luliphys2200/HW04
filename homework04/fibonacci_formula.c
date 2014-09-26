#include <math.h>
#include <stdio.h>
#include <time.h>

#define N 45

long fibonacci(int);

int main(void)
{
    int i;
    long l;
    
    clock_t begin, end;
    double time_spent;
    begin = clock();
    
    for(i = 0; i < N; i++)
    {
        l = fibonacci(i);
        printf("%4d %20ld\n", i, l);
    }
    
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f sec\n", time_spent);
    
    return 0;
}

long fibonacci(int n)
{
    double c = 1/sqrt(5);
    double g1 = (1 + sqrt(5))/2;
    double g2 = (1 - sqrt(5))/2;
    return ceil(c*pow(g1, n) - c*pow(g2, n));
}







