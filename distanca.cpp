#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    int x1,y1,x2,y2,dM;
    double dE;
    cout<<"Cakto koordinatat per piken e pare (x1, y1): ";
    cin>>x1>>y1;
    cout<<"Cakto koordinatat per piken e dyte (x2, y2): ";
    cin>>x2>>y2;
    dE=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    dM=abs(x2-x1)+abs(y2-y1);
    cout<<"Distanca Euklidiane ne mes te dy pikave eshte: "
    <<setprecision(2)
    <<fixed
    <<dE
    <<endl;
    cout<<"Distanca Manhatane ne mes te dy pikave eshte: "<<dM<<endl;
    return 0;
}