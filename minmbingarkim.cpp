#include <iostream>

int minimalja(int a, int b)
{
    int rezultati = a < b ? a : b;
    return rezultati;
}

int minimalja(int a, int b, int c)
{
    int rezultati = a;
    if (b < rezultati)
    {
        rezultati = b;
    }
    if (c < rezultati)
    {
        rezultati = c;
    }

    return rezultati;
}

int minimalja(int vargu[], int n)
{

    int rezultati = vargu[0];

    for (int i = 1; i < n; i++)
    {

        if (vargu[i] < rezultati)
        {
            rezultati = vargu[i];
        }
    }

    return rezultati;
}

int main()
{

    int a = 2, b = -4, c = -12;

    const int n = 7;
    int vargu[n] = {3, -8, 6, 1, -2, 2, 5};

    std::cout << "Minimalja e dy numrave: " << minimalja(a, b) << std::endl;
    std::cout << "Minimalja e tre numrave: " << minimalja(a, b, c) << std::endl;
    std::cout << "Minimalja e vargut: " << minimalja(vargu, n) << std::endl;

    return 0;
}
