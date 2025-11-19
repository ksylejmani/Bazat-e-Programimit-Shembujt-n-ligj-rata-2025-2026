#include<iostream>
using namespace std;
int main()
{
    int a = 4, b = 8, c = -1, i = 0;
    if (b % a == c) // JO
    {
        c = 18 / a;
    }
    else
    {
        while (i < b - 4 /*b-4=8-4=4*/) // 2 cikle te unazes
        {
            c += i; // c=-1+0=-1; c=-1+3=2
            i = i + 3;
        }
    }
    cout << c << endl;// c=2
    return 0;
}