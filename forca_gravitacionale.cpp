#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    float masa1, masa2,rrezja;
    const double G=6.67*pow(10,-11);// Sintaksa: pow(baza, eksponenti)
    double F;
    cout<<"Shkruaj vlerat per masat: ";
    cin>>masa1>>masa2;
    cout<<"Shkruaj vleren per rrezen: ";
    cin>>rrezja;
    F=G*(masa1*masa2)/pow(rrezja,2);
    cout<<"Forca gravitacionale: "
    <<setw(20)
    <<setfill('#')
    <<setprecision(13)
    <<fixed    
    <<left
    <<F<<endl;
    return 0;
}