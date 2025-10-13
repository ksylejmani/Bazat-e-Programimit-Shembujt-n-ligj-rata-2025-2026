#include<iostream>
#include<iomanip>
using namespace std;
const int MAKS_ORET_NE_MUAJ=176;
int main(){
    float paga;
    int numriOreve;
    float pagaMujore;
    cout<<"Shkruaj pagen: ";
    cin>>paga;
    cout<<"Shkruaj numrin e oreve: ";
    cin>>numriOreve;
    if(numriOreve==MAKS_ORET_NE_MUAJ){
        cout<<"Plani mujor \x89sht\x89 realizuar.\n";
        pagaMujore=paga;
    }
    else if(numriOreve>MAKS_ORET_NE_MUAJ){
        cout<<"Numri i orëve për të cilat punëtori ka tejkaluar vlerën e caktuar eshte "
            <<numriOreve-MAKS_ORET_NE_MUAJ<<".\n";
        pagaMujore=paga;
    }
    else{
        cout<<"Numri i orëve që mungojnë eshte "<<MAKS_ORET_NE_MUAJ-numriOreve<<"\n";
        float pagaPerOre=paga/MAKS_ORET_NE_MUAJ;
        pagaMujore=paga-(MAKS_ORET_NE_MUAJ-numriOreve)*pagaPerOre; // 500-88
    }
    cout<<"Paga finale= "
        <<setprecision(3)
        <<fixed
        <<pagaMujore;
    if(pagaMujore<paga){
        cout<<", paga e zbritur ="<<setprecision(4)<<fixed<<paga-pagaMujore;
    }
    cout<<endl;

    return 0;
}