#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int n=8;
    int A[n],s,k,x;
    float mes;
    cout<<"Sa eshte limiti i shpenzimeve per person: ";
    cin>>k;
    for(int i=0;i<n;i++){
        cout<<"Cakto shpenzimet per anetarin "<<i+1<<":";
        cin>>A[i];
    }
    s=0;
    x=0;
    for(int i=0;i<=n-1 /* ose i<n */;i++){
        s=s+A[i];
        if(A[i]>k){
            x++;
            cout<<"Personi me indeks "<<i+1<<" ka kaluar limitin\n";
        }

    }
    mes=(1.0*s)/n; // ose mes=(double)s/n;
    cout<<"Mesatarja e shpenzimeve eshte: "<<setprecision(2)<<fixed<<mes<<endl;
    cout<<"Numri i anentareve qe kane kaluar limitin "<<k<<" eshte: "<<x<<endl; 
    return 0;
}