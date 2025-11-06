#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int k;
    const int n=5;
    int A[n]={7,1,2,5,-3};
    int B[n][n];
    cout<<"Shkruaj vleren per k: ";
    cin>>k;
    int i=0;
    do{
        int j=0;
        do{
            B[i][j]=A[j]+k*i;
            cout<<"Test\n";
            j++;
        }while(j<n);
        i++;
        cout<<"Prova\n";
    }while(i<n);

    cout<<"Matrica e formuar:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<setw(4)<<B[i][j];
        }
        cout<<endl;
    }
    return 0;
}