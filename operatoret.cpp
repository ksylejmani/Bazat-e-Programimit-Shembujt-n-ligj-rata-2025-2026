#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=4, b=-1, c=10;
    bool rez1, rez2, rez3;
    rez1=(a>=b) && (c==a*b); // false
    b++; b++; b++;b+=4;
    rez2=(a+b+c)<=20; // true
    c--; c-=5;
    rez3=rez3+c; // true 
    cout<<"Rez1 = "<<setw(10)<<setfill('#')<<left<<rez1<<endl
        <<"Rez2 = "<<rez2<<endl
        <<"Rez3 = "<<rez3<<endl;
    return 0;
}