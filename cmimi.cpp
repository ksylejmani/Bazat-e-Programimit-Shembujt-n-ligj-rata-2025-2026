#include<iostream>
using namespace std;
int main(){
    float p1,p2,p3;
    float tvsh;
    float cmimi, cmimi_tvsh;
    cout<<"Jepi cmimemet per tre produkte: ";
    cin>>p1>>p2>>p3;
    cout<<"Jepe TVSH-ne: ";
    cin>>tvsh;
    cmimi=p1+p2+p3;
    cmimi_tvsh=cmimi+cmimi*tvsh;
    cout<<"Cmimi pa TVSH eshte: "<<cmimi<<endl;
    cout<<"Cmimi me TVSH eshte: "<<cmimi_tvsh<<endl;


    return 0;
}