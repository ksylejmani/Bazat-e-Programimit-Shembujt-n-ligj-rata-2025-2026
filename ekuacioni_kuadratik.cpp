#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,x1,x2;
    cout<<"Shenoni vlerat per numrat a, b dhe c: ";
    cin>>a>>b>>c;
    float dallori=b*b-4*a*c;
    // if(dallori>=0){
    //     x1=(-b+sqrt(dallori))/(2*a);
    //     x2=(-b-sqrt(dallori))/(2*a);
    //     cout<<"Vlera per x1 eshte: "<<x1<<endl
    //         <<"Vlera per x2 eshte: "<<x2<<endl;
    // }
    // else
    //     cout<<"Funksioni nuk zgjidhje reale!\n";

    // Rasti kur kemi nje zgjidhje te vetme
    if(a==0){
        int x=-c/b;
        cout<<"Vlera e x-it eshte: "<<x<<"\n";
    }
    else{
        if(dallori>0){
        x1=(-b+sqrt(dallori))/(2*a);
        x2=(-b-sqrt(dallori))/(2*a);
        cout<<"Vlera per x1 eshte: "<<x1<<endl
            <<"Vlera per x2 eshte: "<<x2<<endl;
        }
        else if(dallori==0){
            x1=-b/(2*a);
            cout<<"Vlera e zgjidhjes se vetme eshte: "<<x1<<endl;
        }
        else
            cout<<"Funksioni nuk zgjidhje reale!\n";
    }

    return 0;
}