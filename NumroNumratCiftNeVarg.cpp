#include<iostream>
using namespace std;
int numroCift(int vargu[], int m);
int main(){
    const int m=5;
    int A[m]={-2,4,6,3,1};
    cout<<"Numri i vlerave \x87ift \x89sht\x89: "<<numroCift(A,m)<<endl;
    return 0;
}
int numroCift(int vargu[], int m){
    int rezultati=0;
    for(int i=0;i<m;i++){
        cout<<"Prova\n";
        if(vargu[i]%2==0){
            rezultati++;
            cout<<"Test\n";
        }
    }
    return rezultati;
}