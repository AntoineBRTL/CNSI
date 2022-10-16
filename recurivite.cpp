#include <iostream>

// factoriel -> Exo 1
int fact(int x)
{
    if(x == 0) return 1;

    return x * fact(x - 1);
}

// syracuse -> Exo 2
int syracuse(int Un)
{
    std::cout << Un << std::endl;

    if(Un <= 1) return 0;

    if((Un % 2) == 0) return syracuse(Un - 1) / 2;

    return 3 * syracuse(Un - 1) + 1;
}

// serie -> Exo 3
int serie(int n, int a, int b)
{
    if(n == 0) return a;

    if(n == 1) return b;

    return 3 * serie(n - 1, a, b) + 2 * serie(n - 2, a, b) + 5;
}

// boucle -> Exo 4
int boucle(int i, int j)
{
    std::cout << i << std::endl;

    if(j - i == 0) return 0;

    return boucle(i + 1, j);
}

// pgcd -> Exo 5
int pgcd(int a, int b)
{
    if(b == 0) return a;

    return pgcd(b, a%b);
}

// nombre de chiffres -> Exo 6
int nbChiffre(int x)
{
    if(x == 0) return 0;

    return 1 + nbChiffre(int(x / 10));
}

// coef binomiaux -> Exo 7
int c(int n, int p)
{
    if(p > n) return 0;

    if(p == 0 || n == p) return 1;

    return c(n - 1, p - 1) + c(n - 1, p);
}

// Exo 7
void triangleDePascal(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            std::cout << c(i, j) << std::flush;
        }

        std::cout << "" << std::endl;
    }
}

int main()
{
    //std::cout << fact(5) << std::endl;

    //syracuse(9);

    //std::cout << serie(9, 1, 2) << std::endl;

    //boucle(0, 3);

    //std::cout << pgcd(45, 69) << std::endl;

    //std::cout << nbChiffre(4598097) << std::endl;

    //std::cout << c(11, 4) << std::endl;
    triangleDePascal(10);
}