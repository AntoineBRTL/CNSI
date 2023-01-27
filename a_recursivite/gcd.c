/**
 * Computes the greater commun divider.
*/
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}