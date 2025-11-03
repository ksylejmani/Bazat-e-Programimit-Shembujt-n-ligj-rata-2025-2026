#include<iostream>
using namespace std;
int main(){
    const int n=10;
    int lojtaret[n]={5,18,10,45,13,12,7,16,18,9},max,min,shuma=0;
    max=lojtaret[0];
    min=lojtaret[0];
    shuma=lojtaret[0];
    for(int i=1;i<n;i++){
        if(lojtaret[i]>max){
            max=lojtaret[i];
        }
        if(lojtaret[i]<min){
            min=lojtaret[i];
        }
        shuma=shuma+lojtaret[i];
    }
    cout<<"Vlera maksimale: "<<max<<endl
        <<"Vlera minimale: "<<min<<endl
        <<"Shuma e golave te top dhjeteshes: "<<shuma<<endl;
    return 0;
}