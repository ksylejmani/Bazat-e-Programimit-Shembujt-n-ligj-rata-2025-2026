#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int p,i,n,k;
    cout<<"Te lutem, na e jep n-in: ";
    cin>>n;
    cout<<"Cilin numer me i vogle se "<<n<<" deshironi te perjashtohet: ";
    cin>>k;
    p=1;
    i=2;
    do{
        if(i!=k){
            p=p*i;
            cout<<"Prova\n";
        }
        cout<<"Test\n";
        i=i+2;
    }while(i<=n);
    cout<<"Prodhimi: "<<setw(10)<<setfill('N')<<p<<endl;
    cout<<"i="<<i<<endl;
    return 0;
}