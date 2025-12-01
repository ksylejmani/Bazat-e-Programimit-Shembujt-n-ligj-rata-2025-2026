#include <iostream>
#include <math.h>

const int m = 4, n = 5;

bool isPrime(int number);
void findShellCore(int matrix[m][n], float &avgShell, int &countPrimeCore);

int main()
{
    int matrix[m][n] = {{-1, 2, 0, 4, 5},
                        {6, 5, 1, 3, 4},
                        {2, 4, 0, 12, 13},
                        {2, 4, 0, 7, 4}
                    };

    float avgShell;
    int countPrimeCore;

    findShellCore(matrix, avgShell, countPrimeCore);

    std::cout << "Average of shells elements: " << avgShell << std::endl;
    std::cout << "Number of prime values in the core: " << countPrimeCore << std::endl;

    return 0;
}

bool isPrime(int number)
{
    if(number == 0){
        return false;
    }
    
    bool answer = true;

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            answer = false;
            break;
        }
    }

    return answer;
}

void findShellCore(int matrix[m][n], float &avgShell, int &countPrimeCore)
{
    int sum = 0;
    countPrimeCore = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == 0 || i == m - 1) || (j == 0 || j == n - 1))
            {
                sum = sum + matrix[i][j];
            }
            else
            {
                if (isPrime(matrix[i][j]))
                {
                    countPrimeCore++;
                }
            }
        }
    }

    std::cout << sum << " sum"<< std::endl;
    avgShell = (float)sum / (2 * m + 2 * (n - 2));
}
