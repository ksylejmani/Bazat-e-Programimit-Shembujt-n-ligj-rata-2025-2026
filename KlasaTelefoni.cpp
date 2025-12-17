#include<iostream>
#include<string>
using namespace std;
class Telefoni{
    private:
        string prodhuesi;
        string ngjyra;
        float pesha;
        float niveli_baterise;
    public:
        Telefoni(){
            cout<<"Vendos emrin e prdhuesit: ";
            getline(cin,prodhuesi);
            cout<<"Vendos ngjyren: ";
            getline(cin,ngjyra);
            cout<<"Vendos peshen (ne gm): ";
            cin>>pesha;
            cout<<"Vendos nivelin e baterise (%): ";
            cin>>niveli_baterise;
        }
        Telefoni(string p,string ngj,float pe,float nb){
            prodhuesi=p;
            ngjyra=ngj;
            pesha=pe;
            niveli_baterise=nb;
        }
        int numroShkronajt(char shkronja){
            int rez=0;
            for(int i=0;i<prodhuesi.length();i++){
                if(prodhuesi[i]==shkronja){
                    rez++;
                }
            }
            return rez;
        }
        string ktheMesin(string teksti){
            string rez="";
            if(teksti.length()%2==1){
                rez=teksti[teksti.length()/2];
            }
            else{
                rez=teksti[teksti.length()/2-1];
                rez+=teksti[teksti.length()/2];
            }
            return rez;
        }
        float konvertoNgaGramNeKg(){
            float rez;
            rez=pesha/1000;
            return rez;
        }
        string ktheNivlenEBateriseNeVija(){
            string rez="";
            if(niveli_baterise==0){
                rez="Nuk keni bateri";
            }
            else if(niveli_baterise<10){
                rez="Mbusheni baterine";
            }
            else{
                for(int i=niveli_baterise;i>=10;i=i-10){
                    rez+="|";
                    // 45%, 35%,25%,15%
                }
            }
            return rez;
        }
        string merrNgjyren(){
            return ngjyra;
        }
        void vendosNgjyren(string ngj){
            ngjyra=ngj;
        }
        string merrPodhuesni(){
            return prodhuesi;
        }
};
int main(){
    Telefoni t1;
    cout<<"Pesha ne kilogram: "<<t1.konvertoNgaGramNeKg()<<endl;
    cout<<"Mesi i emrit te prodhuesit: "<<t1.ktheMesin(t1.merrPodhuesni())<<endl;
    cout<<"Mesi i ngjyeres eshte: "<<t1.ktheMesin(t1.merrNgjyren())<<endl;
    cout<<"Niveli i baterese eshte: "<<t1.ktheNivlenEBateriseNeVija()<<endl;
    char shkronja;
    cout<<"Jepe nje shkronje per t'i numeruar: ";
    cin>>shkronja;
    cout<<"Numri i shkronjave '"<<shkronja<<"' eshte: "
        <<t1.numroShkronajt(shkronja)<<endl;
    return 0;
}