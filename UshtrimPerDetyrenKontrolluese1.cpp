#include <iostream>
using namespace std;
int main()
{
    const int rr = 3, sh = 4;
    int matrica[rr][sh] = {{2, 4, 1, 6}, {1, -2, 4, 1}, {5, 5, 2, 0}};
    int s=0;
    for(int i=0;i<rr;i++){
        for(int j=0;j<sh;j++){
            if(matrica[i][j]>4){
                s=s+matrica[i][j];
            }
        }
    }
    cout<<"Shuma e elementeve me vlere me te madhe se 4 eshte "<<s<<endl;
    int c=0;
    for(int j=0;j<sh;j++){
        if(matrica[0][j]%2==0){
            c++;
        }
    }
    cout<<"Numri i elementve cift ne rreshtin e pare eshte "<<c<<endl;
    return 0;
}