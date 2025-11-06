#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int n=5;
    int A[n][n];
    cout<<"Matrica A:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                A[i][j]=2*(i+1);
                cout<<"Test1\n";
            }
            else if(i<j){
                A[i][j]=(i+1)+1;
                cout<<"Test2\n";
            }
            else{
                A[i][j]=-1;
                cout<<"Test3\n";
            }
            cout<<setw(4)<<A[i][j];
        }
        cout<<endl;
    }

    return 0;
}