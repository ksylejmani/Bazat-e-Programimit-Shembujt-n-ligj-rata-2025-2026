#include<iostream>
using namespace std;
int minimalja(int a, int b, int c);
int main(){
    int x,y,z;
    cout<<"Jepni tre vlera: ";
    cin>>x>>y>>z;
    int m=minimalja(x,y,z);
    cout<<"Minimalja eshte "<<m<<endl;
    return 0;
}
int minimalja(int a, int b, int c){
    int min=a;
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
    return min;
}