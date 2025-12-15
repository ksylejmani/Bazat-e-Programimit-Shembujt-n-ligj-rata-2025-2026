#include<iostream>
#include<string>
using namespace std;
class Vetura{
private:
    string marka;
    int viti;
    string ngjyra;
    float fuqia_motorike;
public:
    Vetura(){
        cout<<"Cakto marken e vetures: ";
        getline(cin,marka);
        cout<<"Cakto vitin e prodhimit te vetures: ";
        cin>>viti;
        cin.ignore();
        cout<<"Cakto ngjyren e vetures: ";
        getline(cin,ngjyra);
        cout<<"Cakto fuqine motorike te vetures: ";
        cin>>fuqia_motorike;
    }
    Vetura(string m, int v, string ngj, float fm){
        marka=m;
        viti=v;
        ngjyra=ngj;
        fuqia_motorike=fm;
    }
    int llogartVjetersine(int viti_aktual){
        return viti_aktual-viti;
    }
    bool eshteIShpejte(){
        bool rez;
        if(fuqia_motorike>250){
            rez=true;
        }
        else{
            rez=false;
        }
        return rez;
    }
    bool eshteModeliMeShumeFjale(){
        bool rez=false;
        int k=0;
        for(int i=0;i<marka.length();i++){
            if(marka[i]==' '){
                k++;
            }
        }
        if(k>1){
            rez=true;
        }
        return rez;
    }
    void shtypetShenimet(){
        cout<<"Shenimet e vetures jane me poshte\n";
        cout<<"Marka: "<<marka<<endl;
        cout<<"Viti i prodhimit: "<<viti<<endl;
        cout<<"Ngjyra: "<<ngjyra<<endl;
        cout<<"Fuqia motorike: "<<fuqia_motorike<<"kf"<<endl;
    }
    void vendosFuqineMotorike(float fm){
        fuqia_motorike=fm;
    }
    float merrFuqineMotorike(){
        return fuqia_motorike;
    }
};
int main(){
    Vetura v1("Mercedes S Class",2018,"E kalter",120);
    v1.shtypetShenimet();
    cout<<"Mosha e vetures eshte: "<<v1.llogartVjetersine(2025)
        <<" vite"<<endl;
    cout<<"Vetura eshte e shpejte: "<<v1.eshteIShpejte()<<endl;
    cout<<"Modeli ka me shume se nje fjale: "<<v1.eshteModeliMeShumeFjale()
    <<endl;
    v1.vendosFuqineMotorike(500);
    cout<<"Fuqia motorike e ndryshuar eshte: "
        <<v1.merrFuqineMotorike()<<endl;
    cout<<"Vetura eshte e shpejte: "<<v1.eshteIShpejte()<<endl;    
    return 0;
}