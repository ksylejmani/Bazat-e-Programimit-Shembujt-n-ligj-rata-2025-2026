#include <math.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    float pike1, pike2, pike3, mesatarja, varianca;
    string kategoria_lojarit;
    cout << "Shkruani piket e shenuara per tri ndeshjet (ndare me hapesira): ";
    cin >> pike1 >> pike2 >> pike3;
    mesatarja = (pike1 + pike2 + pike3) / 3;
    varianca = ((pow(pike1 - mesatarja, 2) + pow(pike2 - mesatarja, 2) + pow(pike3 - mesatarja, 2)) / 3);
    switch (static_cast<int>(varianca))
    {
    case 0 ... 5:
        kategoria_lojarit = "Konsistent";
        break;
    case 6 ... 10:
        kategoria_lojarit = "Mesatar";
        break;
    default:
        kategoria_lojarit = "Inkonsistent";
        break;
    }
    cout << "Varianca e pikeve: " << varianca << endl;
    cout << "Kategoria e lojarit: " << kategoria_lojarit << endl;
    return 0;
}