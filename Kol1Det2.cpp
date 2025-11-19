#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Jepeni vleren a a-se: ";
    cin>>a;
    c=2*a;
    b=2*(a+c);
    float x=(float)b/c;
    cout<<"b/c="<<x<<endl;
    // ose cout<<"b/c="<<(float)b/c<<endl;
    return 0;
}