#include <stdio.h>

/**
 * Syracuse from Exo 2.
*/
int syracuse(int n)
{
    printf("%d", n);

    if(n <= 1)
        return 0;
    
    if(n % 2 == 0)
        return syracuse(n / 2);
    
    return syracuse(3 * n + 1);
}