#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n); // need to find nth fobonacci number

    int prev = 0;
    int current = 1;
    for ( i = 3; i <= n; ++i)
    {
        int next = prev + current;
        prev = current;
        current = next;
    }
    printf( "%d", current );
    return 0;
}
