#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Jepni vleren per n: ";
    cin >> n;//n=8
    int shuma = 0, i = 2;
    while (i <= n)
    {
        cout<<"Di\x87ka\n";
        if (i + 1 > 4)
        {
            cout<<"Prova\n";
            break;
        }
        shuma += 3 * i - 1;
        cout<<"Test\n";
        i++;
    }
    cout << "Shuma: " << shuma << endl;
    return 0;
}