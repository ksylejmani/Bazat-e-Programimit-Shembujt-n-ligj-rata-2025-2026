#include<iostream>
using namespace std;
int maksimalja(int vargu[], int n, int numri);
int main(){
    const int m=7;
    int vargu[m]={3,4,2,1,9,-6,0};
    int numri;
    cout<<"Jepe nje numer: ";
    cin>>numri;
    cout<<"Vlera maksimale eshte: "<<maksimalja(vargu,m,numri)<<endl;
    return 0;
}
int maksimalja(int vargu[], int n, int numri){
    int max;
    if(numri<1 || numri>7){
        max=0;
    }
    else if(numri==7){
        max=(vargu[n-1]>vargu[0])?(vargu[n-1]):(vargu[0]);
    }
    else{
        max=(vargu[numri-1]>vargu[numri])?(vargu[numri-1]):(vargu[numri]);
    }
    return max;
}