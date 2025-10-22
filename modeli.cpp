#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Shkruani numrin n: ";
    cin>>n;
    int test=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
            test++;
        }
        cout<<endl;
    }
    cout<<"Test:"<<test<<endl;
    return 0;
}