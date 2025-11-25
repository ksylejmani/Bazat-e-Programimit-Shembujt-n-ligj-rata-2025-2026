#include<iostream>
using namespace std;
enum Operacioni{
    Mbeldhja, Zbritja, Prodhimi
};
int aplikoOperacionin(Operacioni o);
int main(){
    Operacioni o=Mbeldhja;
    int rez=aplikoOperacionin(o);
    cout<<"Rezultati eshte: "<<rez<<endl;
    return 0;
}
int aplikoOperacionin(Operacioni o){
    int rez;
    int n1,n2;
    cout<<"Jepi dy numra: ";
    cin>>n1>>n2;
    switch (o)
    {
    case Mbeldhja:
        rez=n1+n2;
        break;
    case Zbritja:
        rez=n1-n2;
        break;
    case Prodhimi:
        rez=n1*n2;
        break;;
    default:
        cout<<"Operacioni eshte jo valid\n";
        break;
    }
    return rez;
}