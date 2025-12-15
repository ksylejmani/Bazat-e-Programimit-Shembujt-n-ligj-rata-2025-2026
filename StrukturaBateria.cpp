#include<iostream>
#include<string>
using namespace std;
struct Bateria{
    string lloji;
    string eficienca;
    int cikletEMbushjes;
    float nrMbushjeve=0;
    void shtoMbushje(float mbushja){
        if(mbushja>0){
            nrMbushjeve+=mbushja;
            cikletEMbushjes++;
        }
        else{
            cout<<"Mbushje negative\n";
        }
    }
    float merrKapacitetin(){
        float rezultati;
        rezultati=(nrMbushjeve/(1+cikletEMbushjes))*100;
        return rezultati;
    }
};
int main(){
    Bateria b={"Litium","E larte",0,0.7};
    cout<<"Kapaciteti fillestare i baterise: "
        <<b.merrKapacitetin()<<endl;
    b.shtoMbushje(0.3);
    b.shtoMbushje(0.2);
    b.shtoMbushje(0.4);
    cout<<"Kapaciteti pas mbushjes i baterise: "
        <<b.merrKapacitetin()<<endl;   
    return 0;
}