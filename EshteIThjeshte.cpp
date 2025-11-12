#include<iostream>
using namespace std;
void EshteThjeshte(int n){
    for(int i=2;i<=n/2;i++){
        cout<<"Test\n";
        if(n%i==0){
            cout<<"Numer i perbere\n";
            cout<<"Prova\n";
            return;
        }
    }
    cout<<"Numer i thjeshte\n";
}
int main(){
    int n;
    cout<<"Jepe nje numer: ";
    cin>>n;
    EshteThjeshte(n);
    return 0;
}