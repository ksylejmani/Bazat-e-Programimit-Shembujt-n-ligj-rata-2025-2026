#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,s=0;
    cout<<"Cakto n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        s=s+i;
        if(i%3==0){
            s=s-5;
        }
    }
    cout<<"s="<<s<<endl;
    return 0;
}