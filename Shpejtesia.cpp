#include <iostream>
using namespace std;
int main(){
    int s;
    float t;
    double v;
    /* cout<<"Jepeni distancen dhe kohen e kaluar: ";
    cin>>s>>t; */
    cout<<"Shkruani vleren per rrugen (ne km): ";
    cin>>s;
    cout<<"Shkruani vleren per kohen e kaluar (ne ore):";
    cin>>t;
    v=s/t;
    cout<<"Shpjetesia e zhvilluar eshte "<<v<<" km/h."<<endl;
    return 0;
}