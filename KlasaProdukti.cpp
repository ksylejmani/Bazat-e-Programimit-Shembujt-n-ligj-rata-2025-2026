#include<iostream>
#include<string>
using namespace std;
const int m=5;
int i=0;
class Produkuti{
    protected:
        int id;
        string emri;
        int maksimumiPorosive;
        int pritja;
        int porosite[m];
    public:
        Produkuti(){

        }
        Produkuti(int id, string emri, int maksimumiPorosive){
            this->id=id;
            this->emri=emri;
            this->maksimumiPorosive=maksimumiPorosive;
            this->pritja=0; // ose pritja=0;            
        }
        int getID(){
            return id;
        }
        string getEmri(){
            return emri;
        }
        int getPritja(){
            return pritja;
        }
        void shtoPorosi(int sasia){
            if(i<maksimumiPorosive){
                porosite[i]=sasia;
                i++;
                if(i%4==0){
                    pritja+=5;
                }
            }
            else{
                cout<<"Eshte arritur numri maksimal i porosive.\n";
                cout<<"Porosia nuk eshte shtuar.\n";
            }
        }
        void procesoPorosine(){
            cout<<"Porosia e procesuar eshte: "<<porosite[0]<<endl;
            for(int j=0;j<i-1;j++){
                porosite[j]=porosite[j+1];
            }
            i--;
            if(i%4==0 && pritja>0){
                pritja-=5; 
            }
        }
};
class ProduktiPerShitje:public Produkuti{
    private:
        double cmimi;
    public:
        ProduktiPerShitje(){
            cout<<"Caktoje ID-ne e produktit: ";
            cin>>id;
            cout<<"Cakto emrin e produktit: ";
            cin>>emri;
            cout<<"Cakto prtijen: ";
            cin>>pritja;
            cout<<"Cakto \x80mimin: ";
            cin>>cmimi;
        }
        double llogaritCmiminTotal(){
            double rez=0;
            cout<<"Cmimi: "<<cmimi<<endl;
            for(int j=0;j<i;j++){
                cout<<"Porosija ["<<j<<"]="<<porosite[j]<<endl;
                rez=rez+porosite[j]*cmimi;
                cout<<"Test: "<<rez<<endl;
            }
            return rez;
        }

};
int main(){
    // Produkuti p(101,"Keksa",m);

    // cout<<"ID-ja: "<<p.getID()<<endl;
    // cout<<"Emri: "<<p.getEmri()<<endl;
    // cout<<"Pritja: "<<p.getPritja()<<endl;
    // p.shtoPorosi(8);
    // p.shtoPorosi(4);
    // p.shtoPorosi(7);
    // p.procesoPorosine();
    // p.procesoPorosine();

    ProduktiPerShitje psh;
    psh.shtoPorosi(4);
    psh.shtoPorosi(3);
    psh.shtoPorosi(5);
    cout<<"\x80mimi total eshte: "<<psh.llogaritCmiminTotal()<<" euro."<<endl;
    return 0;
}