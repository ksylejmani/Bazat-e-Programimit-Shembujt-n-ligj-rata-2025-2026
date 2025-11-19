#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 3, b = 6, c = 4;
    if (a > 2 && b % a == 0) // E sakt
    {
        if (a + b / 2 - 2 == c) // E sakt
        {
            cout << setfill('B') << setw(b) << left << b << endl;
            //6BBBBB
        }
        cout << a << endl;
        //3
    }
    if (b > c) // E sakt
    {
        cout << showpos << c << endl;
        //+4
    }
    return 0;
}