#include<iostream>
#include<iomanip>
using namespace std;
int mediana(int a, int b, int c);
float mesatarja(int a,int b,int c);
void MinMax(int a, int b, int c, int &min, int &max){
    min=a;
    max=a;
    if(b<min){
        min=b;
    }
    if(b>max){
        max=b;
    }
    if(c<min){
        min=c;
    }
    if(c>max){
        max=c;
    }
    return;
}
int main(){
    int x,y,z;
    int med;
    float mes;
    int min,max;
    cout<<"Cakto vlerat per tre numra te ndryshem: ";
    cin>>x>>y>>z;
    med=mediana(x,y,z);
    mes=mesatarja(x,y,z);
    MinMax(x,y,z,min,max);
    cout<<"Mediana:"<<med<<endl;
    cout<<"Mesatarja: "<<setprecision(2)<<fixed<<mes<<endl;
    cout<<"Minimalja: "<<min<<endl;
    cout<<"Maksimalja: "<<max<<endl;
    return 0;
}
int mediana(int a, int b, int c){
    int m;
    if(((a>b)&&(a<c))||((a<b)&&(a>c))){
        m=a;
    }
    else if(((b>a)&&(b<c))||((b<a)&&(b>c))){
        m=b;
    }
    else{
        m=c;
    }
    return m;
}
float mesatarja(int a, int b, int c){
    float mes;
    mes=(a+b+c)/3.0;
    return mes;
}