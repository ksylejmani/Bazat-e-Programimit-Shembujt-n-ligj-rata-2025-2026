#include<iostream>
#include<string>
#include "Salla.h"
using namespace std; 
int main(){
    Salla s;
    s.setEmri("Salla 615");
    s.setKapaciteti(30);
    cout<<"Emri i salles: "<<s.getEmri()<<endl;
    s.inicializoShfrytezimin();
    cout<<"Perqindja e shftyezimit per diten 1 eshte "
        <<s.shfrytezimiNeDite(1)<<endl;
    cout<<"Perqindja e shftyezimit per diten 7 eshte "
        <<s.shfrytezimiNeDite(7)<<endl;
    return 0;
}