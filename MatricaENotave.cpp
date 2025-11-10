#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int m=4,n=6,k=6;
    int v[m][n]={{8,9,7,9,9,6},
                {10,8,6,8,7,7},
                {8,6,9,9,8,8},
                {10,6,10,10,10,7}};
    int c[k]={0,0,0,0,0,0};
    int s=0;
    float mes;
    int i=0;
    while (i<m)
    {
        int j=0;
        while (j<n)
        {
            s=s+v[i][j];
            c[v[i][j]-5]++; //ose c[v[i][j]-5]=c[v[i][j]-5]+1;
            j++;
        }
        i++;
    }
    mes=(float)s/(m*n);
    cout<<"Mesatarja: "<<setprecision(2)<<fixed<<mes<<endl;
    cout<<"Numri i notave te ndryshme eshte:\n";
    for(int i=0;i<k;i++){
        cout<<"Numri i notave "<<i+5<<" eshte "<<c[i]<<endl;
    }

    return 0;
}