#include <stdio.h>
#include <math.h>
#include <time.h>
     

double quad(double x0, int n)
{
    int i;
    double x = x0;

    for (i = 0; i < n; i++) {
        x = 4.0 * x * (1.0 - x);
     }

    return x;
}

int main(void)
{
    clock_t start, end;
    double cpu_time_used;

    int N = 10000000;

    start = clock();
    double x = quad(0.2, N);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("last val = %g\n", x);
    printf("time elapsed = %g seconds\n", cpu_time_used);
    return 0;
}

