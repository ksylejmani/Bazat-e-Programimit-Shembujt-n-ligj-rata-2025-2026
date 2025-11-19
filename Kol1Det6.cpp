#include<iostream>
using namespace std;
int main(){
    const float cmimi=3.25;
    float totali;
    int zbritja;
    int numri;
    do{
        cout<<"Jepe nje numer te plote: ";
        cin>>numri;
    }while(numri<=0);
    switch (numri)
    {
    case 1 ... 3:
        zbritja=0;
        break;
    case 4 ... 7:
        zbritja=3;
        break;
    default:
        zbritja=10;
        break;
    }
    totali=numri*cmimi-zbritja;
    cout<<"Totali i fatures eshte: "<<totali<<endl;
    return 0;
}