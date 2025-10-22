#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 8, c = -1, i = 0;
    if (b % a == c)
    {
        c = 18 / a;
        cout<<"Test1\n";
    }
    else
    {
        while (i < b - 4)
        {
            c += i;
            cout<<"Test2\n";
            i = i + 3;
        }
    }
    cout << c << endl;
    return 0;
}