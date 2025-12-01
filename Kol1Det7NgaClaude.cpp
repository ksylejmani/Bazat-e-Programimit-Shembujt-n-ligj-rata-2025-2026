/*
8.
[5 pikë] Të shkruhet programi sipas kërkesave në vijim:
a. [1 pikë] Të lexohen 100 numra jo të plotë nga tastiera.
b. [2 pikë] Të llogaritet dhe shtypet mesatarja e numrave të lexuar.
c. [2 pikë] Të tregohet se sa nga numrat e lexuar janë më të mëdhenj se 50.

*/
#include<iostream>
using namespace std;
int main(){
    const int n=10;
    float numrat[n],s=0,mes,numruesi=0;
    
    for(int i=0;i<n;i++){
        cout<<"Vendos vleren "<<i+1<<": ";
        cin>>numrat[i];
        s=s+numrat[i];
        if(numrat[i]>50){
            numruesi++;
        }
    }
    mes=s/n;
    cout<<"Mesatarja: "<<mes<<endl;
    cout<<"Numri i vlerave me te medha se 50: "<<numruesi<<endl;
    return 0;
}