#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Filmi{
    protected:
        string emri;
        int vitiProdhimit;
        int vleresimi;
    public:
        int numriShikimeve;
        Filmi(){

        }
        Filmi(string _emri, int _vitiProdhimit, int _vleresimi){
            emri=_emri; // this->emri=_emri;
            vitiProdhimit=_vitiProdhimit;
            vleresimi=_vleresimi;
        }
        ~Filmi(){
            //cout<<"Brenda Destrkutorit"<<endl;
        }
        string getEmri(){
            return emri;
        }
        int getVitiProdhimi(){
            return vitiProdhimit;
        }
        int getVleresimi(){
            return vleresimi;
        }
        void setVleresimi(int _vleresimi){
            if(_vleresimi>=1 && _vleresimi<=5){
                vleresimi=_vleresimi;
            }
            else{
                cout<<"Vleresimi nuk eshte ne rangun 1 deri ne 5.\n";
            }
        }
        float mesatarja(int vitiAktual){
            int numriDiteve=(vitiAktual-vitiProdhimit)*365;
            float mes=(float)numriShikimeve/numriDiteve;
            return mes;
        }

};
class FilmiKomedi:public Filmi{
    private:
        int skenatQesharake;
    public:
        FilmiKomedi(){
            cout<<"Cakto emrin e komedise: ";
            getline(cin,emri);
            cout<<"Cakto vitin e prohdimit: ";
            cin>>vitiProdhimit;
            cout<<"Cakto vleresimin: ";
            cin>>vleresimi;
            cout<<"Cakto numrin e shikimeve: ";
            cin>>numriShikimeve;
            cout<<"Cakto numrin e skenave qesharake: ";
            cin>>skenatQesharake;
        }
        void tregoRekomandiminPerPersonaTeMoshuar(){
            if(skenatQesharake>=10){
                cout<<"Filimi nuk preferohet per persona ne moshe.\n";
            }
            else{
                cout<<"Filimi eshte i pershtatshem per te gjitha grupmoshat.\n";
            }
        }
        
};
int main(){
    // Filmi f("Titaniku",1997,5);
    // cout<<"Emri i filmit: "<<f.getEmri()<<endl;
    // cout<<"Viti i prodhimit: "<<f.getVitiProdhimi()<<endl;
    // cout<<"Caktoni numri e shikimeve te filmit: ";
    // cin>>f.numriShikimeve;
    // cout<<"Mesatarja e shikimeve per nje dite: "
    // <<setprecision(2)
    // <<fixed
    // <<f.mesatarja(2025)<<endl;
    FilmiKomedi fk;
    cout<<"Mesatarja e shikimeve per nje dite: "<<fk.mesatarja(2025)<<endl;
    fk.tregoRekomandiminPerPersonaTeMoshuar();
    return 0;
}