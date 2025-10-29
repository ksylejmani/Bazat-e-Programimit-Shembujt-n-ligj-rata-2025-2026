#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int n=7;
    float cmimet[n],shuma;
    int mbi_mesatare;
    float mesatarja;
    for(int i=0;i<=n-1;i++){
        cout<<"Jepe \x87mimin p\x89r produktin "<<i+1<<" :";
        cin>>cmimet[i];
        cout<<"Prova1\n";
    }
    shuma=0;
    for(int i=0;i<=n-1;i++){
        shuma=shuma+cmimet[i];
        cout<<"Prova2\n";
    }
    mesatarja=shuma/n;
    mbi_mesatare=0;
    for(int i=0;i<=n-1;i++){
        if(cmimet[i]>mesatarja){
            mbi_mesatare++;
            cout<<"Prova3\n";
        }
    }
    cout<<"Mesatarja: "<<setprecision(2)<<fixed<<mesatarja<<endl
        <<"Numri i vlerave mbi mesataren eshte: "<<mbi_mesatare<<endl;
    return 0;
}