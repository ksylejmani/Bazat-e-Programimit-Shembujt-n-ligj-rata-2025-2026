#include<iostream>
using namespace std;
int main(){
    const int n=10;
    int vargu[n],k=0;
    for(int i=0;i<n;i++){
        cout<<"Vlera per anetarin "<<i+1<<": ";
        cin>>vargu[i];
        if(vargu[i]%2!=0){
            vargu[i]=vargu[i]+1;
            k++;
        }
    }
    cout<<"Numri i vlerave te shnderruar ne numri cift eshte: "<<k<<endl;
    for(int i=0;i<n;i++){
        cout<<vargu[i]<<" ";
    }
    cout<<endl;
    return 0;
}