#include<iostream>
using namespace std;
int main(){
    const int n=7;
    float vargu[n]={3.5,8,10,4,6.7,13,2};
    float maksimalja=vargu[0];
    for(int i=0;i<=n-1;i++){
        if(vargu[i]>maksimalja){
            maksimalja=vargu[i];
            cout<<"Prova\n";
        }
    }
    cout<<"Maksimalja eshte: "<<maksimalja<<endl;
    return 0;
}