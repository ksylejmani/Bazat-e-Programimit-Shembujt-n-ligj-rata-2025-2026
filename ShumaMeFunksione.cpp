#include <iostream>
using namespace std;
int shuma = 2;
int llogaritShumen(int n)
{
    int shuma = 0;
    for (int i = 1; i <= n; i++)
    {
        shuma += i;
    }
    return shuma;
}
int main()
{
    int numri = 4;
    shuma++;
    cout<<"Shuam 1: "<<llogaritShumen(numri)<<endl;
    cout << "Shuma 2: " << shuma << endl;
    return 0;
}