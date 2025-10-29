#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    float numri,maksimalja;
    int njeshifrore;
    cout<<"Sa numra deshironi te i jepni? ";
    cin>>n;
    maksimalja=-pow(2,31);
    njeshifrore=0;
    for(int i=0;i<n;i++){
        cout<<"Jepeni numrin "<<i+1<<": ";
        cin>>numri;
        if(numri>maksimalja){
            maksimalja=numri;
        } 
        if(numri>-10 && numri<10){
            njeshifrore++;
        }
    }
    cout<<"Maksimalja: "<<maksimalja<<endl
        <<"Numri i vlerave njeshifrore eshte: "<<njeshifrore<<endl;
    return 0;
}