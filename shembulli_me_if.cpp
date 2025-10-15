#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a = 3.5, b = 4;
    float c = a + b;//c=3+4=7
    if (c * 2 < 11) {
        cout << c - 1 << endl;
        cout<<"Test Alfa\n";
    } else {
        cout << showpos << showpoint << c << endl;
        cout << ++b << endl;
        cout<<"Test Beta\n";
    }
return 0;
}