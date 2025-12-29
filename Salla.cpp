#include<iostream>
#include<string>
#include "Salla.h"
using namespace std;
Salla::Salla(){
    cout<<"Cakto emrin e salles: ";
    getline(cin,emri);
}
string Salla::getEmri(){
    return emri;
}
void Salla::setEmri(string emri){
    this->emri=emri;
}
int Salla::getKapaciteti(){
    return kapaciteti;
}
void Salla::setKapaciteti(int kapaciteti){
    this->kapaciteti=kapaciteti;
}
void Salla::inicializoShfrytezimin(){
    for(int i=0;i<m;i++){
        cout<<"Cakto shfrytezimin per diten "
            <<i+1<<": ";
        cin>>shfrytezimi[i];
    }
}
float Salla::shfrytezimiNeDite(int dita){
    if(dita<1 || dita>m){
        return -1;
    }
    else{
        float perqindja=(float)shfrytezimi[dita-1]/kapaciteti*100;
        return perqindja;
    }
}