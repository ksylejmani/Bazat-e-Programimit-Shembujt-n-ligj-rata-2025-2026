#include <iostream>
using namespace std;
int main(){
    int aktuali, lindja,mosha;
    
    // Leximi i vlerave hyrese
    cout<<"Vendos vleren per vitin aktual: ";
    cin>>aktuali;
    cout<<"Vendos vlern per vitin e lindjes: ";
    cin>>lindja;
    
    // Llogaritaj e moshes
    mosha=aktuali-lindja;

    // Paraqitja e vlerave dalese
    cout<<"Mosha e juaj eshte: "<<mosha<<endl;
    return 0;
}