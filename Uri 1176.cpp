#include <stdio.h>

int main()
{
    int N, T, i;
    
    long long fib[61];
    scanf("%d", & T);
    
    fib[0] = 0;
    fib[1] = 1;
    
    for( i = 2; i <= 60; i++)
    {
            fib[i] = fib[i-2] + fib[i-1];
    }
    
    for( i = 0; i < T; i++)
    {
            scanf("%d", &N);
            printf("Fib(%d) = %lld\n",N,fib[N]);
    }
    
    return 0;
}
