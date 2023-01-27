#include <stdio.h>

/**
 * Logs all the integers between i and j.
*/
int loop(int i, int j)
{
    printf("%d", i);

    if(i == j)
        return 0;
    
    return loop(i + 1, j);
}