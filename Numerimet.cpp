#include<iostream>
using namespace std;
string nota_tekst[]={"pese","gjashte","shtate","tete","nente", "dhjete"};
enum nota{
    pese,gjashte, shtate, tete, nente, dhjete
};
enum zgjidhja{
    a,b,c,d
};
enum dita{
    e_hene, e_marte, e_merkure, e_enjte, e_premte, e_shtune, e_diele
};
int main(){
    int piket;
    nota n=pese;
    cout<<"Sa jane piket e kollokviumit? ";
    cin>>piket;
    if(piket>=20 && piket<=24){
        n=gjashte;
    }
    else if(piket>=25 && piket<=28){
        n=shtate;
    } else if(piket>=29 && piket<=33){
        n=tete;
    }else if(piket>=34 && piket<=37){
        n=nente;
    } else if(piket>=38 ){
        n=dhjete;
    }
    cout<<"Nota eshte "<<n+5<<"("<<nota_tekst[n]<<")"<<endl;
}