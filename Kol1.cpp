#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 9, c = 0;
    for (int i = 1; i <= b; i++)
    {
        if (i % a == 0)
        {
            c = c + i;
        }
        else
        {
            c = c + 1;
        }
    }
    cout << c << endl;
    return 0;
}