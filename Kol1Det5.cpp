#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b,numrimi=0;
    // PikaEKthimit:
    cout<<"Shkruaj vleren e b-se: ";
    cin>>b;
    // if(b>a){
    //     numrimi++;
    //     goto PikaEKthimit;
    // }
    while (b>a)
    {
        cout<<"Shkruaj perseri vleren e b-se: ";
        cin>>b;
        numrimi++;
    }
    
    cout<<"Numri i perseritjeve eshte: "<<numrimi<<endl;
    return 0;
}