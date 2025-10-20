#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,i,s;
    cout<<"Shkruaj vleren per n: ";
    cin>>n; //n=11=1+3+5+7+9+11
    s=0;
    i=1;
    do{
        s=s+i;
        i=i+2; /* ose i+=2*/
        cout<<"Test\n";
    }while(i<=n);
    cout<<"Shuma: "<<s<<endl;
    return 0;
}