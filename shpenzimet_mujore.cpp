#include <iostream>
using namespace std;
int main(){
    int nr_artikujve;
    float cmimi;
    int te_ndryshme;
    int buxheti;
    float shpenzimet_mujore, mbetja;
    cout<<"Jepni numri e artikujve: ";
    cin>>nr_artikujve;
    cout<<"Jepni cmimin mesatar: ";
    cin>>cmimi;
    cout<<"Jepni vlern per kategorine Te Ndryshme: ";
    cin>>te_ndryshme;
    cout<<"Sa eshte buxheti: ";
    cin>>buxheti;
    shpenzimet_mujore=nr_artikujve*cmimi+te_ndryshme;
    mbetja=buxheti-shpenzimet_mujore;
    cout<<"Shpenzimet mujore: "<<shpenzimet_mujore<<endl;
    cout<<"Mbetja: "<<mbetja<<endl;
    return 0;
}