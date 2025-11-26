#include<iostream>
#include<string>
using namespace std;
string ktheDyShkronjatNeSkaje(string teksti);
int kthePozitenEHapesires(string emri_mbimeri);
string ktheInicialet(string emri_mbiemri);
bool eshtePalidrom(string tekst);
int main(){
    string teksti; // Lis Arifaj
    cout<<"Jepe emrin dhe mibemrin e nje personi: ";
    getline(cin,teksti);
    cout<<"Simbolet skajore jane: "<<ktheDyShkronjatNeSkaje(teksti)<<endl;
    cout<<"Pozita e hapesires eshte: "<<kthePozitenEHapesires(teksti)+1<<endl;
    cout<<"Inicialet jane: "<<ktheInicialet(teksti)<<endl;
    if(eshtePalidrom(teksti)){
        cout<<"Teksti eshte palindrom\n";
    }
    else{
        cout<<"Teksti nuk eshte palindrom\n";
    }
    return 0;
}
string ktheDyShkronjatNeSkaje(string teksti){
    string rezultati="";
    rezultati+=teksti[0];
    rezultati+=' ';
    rezultati+=teksti[teksti.length()-1];
    return rezultati;
}
int kthePozitenEHapesires(string emri_mbimeri){
    int rezultati=-1;
    for(int i=0;i<emri_mbimeri.length();i++){
        if(emri_mbimeri.at(i)==' '){
            rezultati=i;
            break;
        }
    }
    return rezultati;
}
string ktheInicialet(string emri_mbiemri){
    string inicialet="";
    inicialet+=emri_mbiemri[0];
    inicialet+='.';
    int hapesira=kthePozitenEHapesires(emri_mbiemri);
    inicialet+=emri_mbiemri[hapesira+1];
    inicialet+='.';
    return inicialet;
}
bool eshtePalidrom(string tekst){
    bool rez=true;
    for(int i=0;i<tekst.length()/2;i++){
        if(tekst[i]!=tekst[tekst.length()-i-1]){
            rez=false;
            break;
        }
    }
    return rez;
}