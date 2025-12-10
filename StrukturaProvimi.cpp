#include<iostream>
#include<string>
using namespace std;
struct Provimi
{
    string emri;
    int numri_paraqitjeve;
    int numri_studenteve;
    void paraqit(){
        numri_paraqitjeve++;
        cout<<"Provimi është paraqitur me sukses\n";
    }
    double perqindja(){
        double rezultati;
        rezultati=((double)numri_paraqitjeve/numri_studenteve)*100;
        return rezultati;
    }
};

int main(){
    Provimi p={"Bazat e Programimit",0,12};
    int numri_paraqitjeve;
    cout<<"Shkruaj numrin e paraqitjeve: ";
    cin>>numri_paraqitjeve;
    for(int i=1;i<=numri_paraqitjeve;i++){
        p.paraqit();
    }

    cout<<"Perqindja e paraqitjes se provimeve eshte "
        <<p.perqindja()<<"%\n";
    return 0;
}