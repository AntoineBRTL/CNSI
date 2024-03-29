/**
 * Computes the binomial of n choose k.
*/
int binomial(int n, int k)
{
    if(k == 0 || n == k)
        return 1;
    return binomial(n - 1, k - 1) + binomial(n - 1, k);
}