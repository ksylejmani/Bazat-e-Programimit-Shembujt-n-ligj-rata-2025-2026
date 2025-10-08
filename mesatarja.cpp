#include<iostream>
using namespace std;
int main(){
    float mesatarja;
    cout<<"Vendos noten mesatare: ";
    cin>>mesatarja;
    //Permes Operatorit ternar
    // (mesatarja>=9)?(cout<<"Fiton bursen universitare dhe bursen komunale"<<endl):
    //                ((mesatarja>=8)?(cout<<"Fiton bursen komunale"<<endl): 
    // (cout<<"S'fiton as bursën universitare e as ate komunale\n"));

    //Permes struktures degezuese IF
    if(mesatarja>=9){
        cout<<"Fiton burs universitare dhe bursen komunale\n";
    }
    else if(mesatarja>=8){
        cout<<"Fiton burs\x89n komunale\n";
    }
    else{
        cout<<"S'fiton as bursën universitare e as ate komunale\n";
    }
    return 0;
}