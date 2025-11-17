#include <iostream>
using namespace std;
int shuma = -5;
void shtoNeShume(int numri)
{
    shuma += numri; // shuma=1+4=5
}
void zbritNgaShuma()
{
    shuma--;
}
int main()
{
    int numri;
    cout << "Shenoni nje numer: ";
    cin >> numri; // 3
    shuma += 2 * numri; // shuma=-5+2*3=1
    shtoNeShume(4);
    zbritNgaShuma();
    cout << "Shuma: " << shuma << endl;// shuma=5
}