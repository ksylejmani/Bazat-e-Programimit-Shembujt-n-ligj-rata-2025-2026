#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    short int nota1, nota2, nota3;
    float mesatarja;
    cout<<"Jepe noten e pare: ";
    cin>>nota1;
    cout<<"Jepe noten e dyte: ";
    cin>>nota2;
    cout<<"Jepe noten e trete: ";
    cin>>nota3;
    mesatarja=(float)(nota1+nota2+nota3)/3;
    (mesatarja>=9)?(cout<<"Keni fituar cmimin student/e e dalluar\n"):
                (cout<<"Nuk e keni fituar cmimin student/e e dalluar\n");
    return 0;
}