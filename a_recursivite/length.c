/**
 * Computes the length of an integer.
*/
int length(int n)
{
    if(n / 10 < 1)
        return 1;
    return 1 + length(n / 10);
}