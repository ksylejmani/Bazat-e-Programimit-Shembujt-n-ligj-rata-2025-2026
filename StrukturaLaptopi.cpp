#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
enum ngjyra{
    e_zeze=1, e_hirte,e_bardhe
};
struct Laptopi
{
    ngjyra ngj;
    string prodhuesi;
    int numri_serik;
    float pesha;
};
int merrDyShifratEFunditTeNumritSerik(Laptopi l);
Laptopi lexoShenimetPerLaptopin();
float perqindja(string prodhuesi, char shkronja);
bool eshteEPlotePesha(float pesha);
int main(){
    Laptopi l={e_zeze,"Lenovo",100123,2.0};
    // Laptopi l2=lexoShenimetPerLaptopin();
    cout<<"Per Laptopin 1, dy shifrat e fundit te numrit serij jane: "
        <<merrDyShifratEFunditTeNumritSerik(l)<<endl;
    // cout<<"Per Laptopin 2, dy shifrat e fundit te numrit serij jane: "
    //     <<merrDyShifratEFunditTeNumritSerik(l2)<<endl;
    char shkronja;
    cout<<"Jepe nje shkronje: ";
    cin>>shkronja;
    cout<<"Perqindja qe ze shkronja "<<shkronja<< " ne emrin e prodhuesit "
        <<l.prodhuesi<<" eshte "
        <<setprecision(2)<<fixed
        <<perqindja(l.prodhuesi,shkronja)<<"%"<<endl;
    (eshteEPlotePesha(l.pesha))?(cout<<"Pesha eshte numer i plote\n"):(
        cout<<"Pesha nuk eshte numer i plote\n"
    );
    return 0; 

}
int merrDyShifratEFunditTeNumritSerik(Laptopi l){
    int rezultati;
    rezultati=l.numri_serik%100;
    return rezultati;
}
Laptopi lexoShenimetPerLaptopin(){
    Laptopi rezultati;
    cout<<"Cila eshte ngjyra e laptopit (1 - e zeze, 2 - e hirit ose 3 - bardhe): ";
    int zgjedhja;
    cin>>zgjedhja;
    rezultati.ngj=static_cast<ngjyra>(zgjedhja);
    cin.ignore();
    cout<<"Kush eshte prodhuesi: ";
    getline(cin,rezultati.prodhuesi);
    cout<<"Si eshte numri serik: ";
    cin>>rezultati.numri_serik;
    cout<<"Vendos peshen: ";
    cin>>rezultati.pesha;
    return rezultati;   
}
float perqindja(string prodhuesi, char shkronja){
    int numruesi=0;
    for(int i=0;i<prodhuesi.length();i++){
        if(prodhuesi[i]==shkronja){
            numruesi++;
        }
    }
    float rezultati=((float)numruesi/prodhuesi.length())*100;
    return rezultati;
}
bool eshteEPlotePesha(float pesha){
    bool rezultati;
    int pjesaEPloteEPeshes=(int)pesha;
    if(pesha-pjesaEPloteEPeshes==0){
        rezultati=true;
    }
    else{
        rezultati=false;
    }
    return rezultati;
}
// bool eshteEPlotePesha(float pesha){
//     bool rezultati;
//     float x=pesha % (int)pesha;
//     int pjesaEPloteEPeshes=(int)pesha;
//     if(pesha-pjesaEPloteEPeshes==0){
//         rezultati=true;
//     }
//     else{
//         rezultati=false;
//     }
//     return rezultati;
// }