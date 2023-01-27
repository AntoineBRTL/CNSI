/**
 * Serie recursive function from Exo 3.
*/
int serie(int n, int a, int b)
{
    if(n == 0)
        return a;

    if(n == 1)
        return b;
    
    return 3 * serie(n - 1, a, b) + 2 * serie(n - 2, a, b) + 5;
}