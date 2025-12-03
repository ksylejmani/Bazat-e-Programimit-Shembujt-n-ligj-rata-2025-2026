#include <iostream>
using namespace std;
int llogaritja(int vargu[], int m );
int llogaritja(int vargu[], int m, int nota );
int llogaritja(int vargu[], float m );




int main(){
    
    const int m = 7;
    int notat[m] = {8, 10, 10, 5, 5, 7, 9};
    int nota = 8;
    cout<<"Numri i notave mbi mesatare: "<<llogaritja(notat, m)<<endl;
    cout<<"Numri i notave "<<nota<<" eshte: "<<llogaritja(notat, m, nota)<<endl;
    cout<<"Numri i notave jo kaluese eshte: "<<llogaritja(notat, (float)m)<<endl;


    
    return 0;
}

int llogaritja(int vargu[], int m ){
    int shuma = 0;
    int numruesi = 0;
    for(int i=0; i<m; i++){
        shuma += vargu[i];
    }
    float mes = (float)shuma/m;
    for(int i = 0; i<m;i++){
        if(vargu[i]>mes){
            numruesi++;
        }
    }
    return numruesi;
}

int llogaritja(int vargu[], int m, int nota ){
    int numruesi = 0;
    for(int i = 0; i<m; i++){
        // cout<<"test\n";
        if(vargu[i]==nota){
            numruesi ++;
            // cout<<"Prova\n";
        }
    }
    return numruesi;
}

int llogaritja(int vargu[], float m ){
    int numruesi = 0;
    for(int i = 0; i<m; i++){
        if(vargu[i]==5){
            numruesi++;
        }
    }
    return numruesi;
}
