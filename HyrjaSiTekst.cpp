#include<iostream>
#include<string>
using namespace std;
int llogaritNumrinESimoboleve(string emri);
int gjejeHapesiren(string emri);
void shtypInicialet(string emri);
int main(){
    string emri;
    cout<<"Shkruaj emrin dhe mbiemrin: ";
    getline(cin,emri);
    cout<<"Nurmi i simboleve: "<<llogaritNumrinESimoboleve(emri)<<endl;
    int pozita=gjejeHapesiren(emri);
    if(pozita!=-1){
        cout<<"Hapesira gjendet ne poziten: "<<pozita+1<<endl;
    }
    else{
        cout<<"Nuk ka hapesire!\n";
    }
    shtypInicialet(emri);
    return 0;
}
int llogaritNumrinESimoboleve(string emri){
    int rezultati;
    rezultati=emri.length()-1;
    return rezultati;
}
int gjejeHapesiren(string emri){
    int pozita=-1;
    for(int i=0;i<emri.length();i++){
        if(emri[i]==' '){
            pozita=i;
            break;
        }
    }
    return pozita;
}
void shtypInicialet(string emri){
    string inicialet="";
    inicialet=inicialet+emri[0];
    if(emri[0]=='D' && emri[1]=='h'){
        inicialet+=emri[1];
    }
    else if(emri[0]=='G' && emri[1]=='j'){
        inicialet+=emri[1];
    }else {
        // Te trajtohen te gjitha rastet
    }
    inicialet+='.';
    int hapesira=gjejeHapesiren(emri);
    inicialet+=emri[hapesira+1];

    if(emri[hapesira+1]=='D' && emri[hapesira+2]=='h'){
        inicialet+=emri[hapesira+2];
    }
    else if(emri[hapesira+1]=='G' && emri[hapesira+2]=='j'){
        inicialet+=emri[hapesira+2];
    }else {
        // Te trajtohen te gjitha rastet
    }
    inicialet+='.';
    cout<<"Inicialet: "<<inicialet<<endl;
}