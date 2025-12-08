#include<iostream>
#include<string>
using namespace std;
struct Studenti
{
    long long int ID;
    string emri;
    short int mosha;
};

int vitiIRegjistrimit(Studenti s);
int pozitaEHapesires(string emri);
string te_dhenat(Studenti s);


int main(){
    Studenti s={250756100121,"Erion Shala",18};
    cout<<"Viti i regjistrimit: "<<vitiIRegjistrimit(s)<<endl;
    cout<<"Te dhenat e studentit jane: "
        <<te_dhenat(s)<<endl;
    return 0;
}
int vitiIRegjistrimit(Studenti s){
    int rezultati=2000;
    long long int i=s.ID;
    cout<<"i="<<i<<endl;
    while(i>99){
        int shifra_momentale=i%10;
        cout<<shifra_momentale<<" ";
        i=i/10;
    }
    rezultati=rezultati+i;
    return rezultati;
}
int pozitaEHapesires(string emri){
    int rezultati=-1;
    for(int i=0;i<emri.length();i++){
        if(emri[i]==' '){
            rezultati=i;
            break;
        }
    }
    return rezultati;
}
string te_dhenat(Studenti s){
    string rezultati="";
    rezultati+=to_string(s.ID);
    rezultati+=' ';
    rezultati+=s.emri[0];
    rezultati+='.';
    int hapesira=pozitaEHapesires(s.emri);
    rezultati+=s.emri[hapesira+1];
    rezultati+='.';
    rezultati+=' ';
    rezultati+=to_string(s.mosha);
    return rezultati;
}